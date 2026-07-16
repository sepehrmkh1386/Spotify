#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QmessageBox>
#include "listener.h"
#include "artistdashboard.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_signUpButton_clicked()
{
    QString fullName = ui->fullNameEdit->text();
    QString userName = ui->userNameEdit->text();
    QString password = ui->passwordEdit->text();

    bool success = false;

    if(ui->roleComboBox->currentText() == "Artist")
    {
        success = authService.registerArtist(fullName,
                                             userName,
                                             password);
    }
    else
    {
        success = authService.registerListener(fullName,
                                               userName,
                                               password);
    }

    if(success)
    {
        QMessageBox::information(this,
                                 "Success",
                                 "Account created successfully.");
    }
    else
    {
        QMessageBox::warning(this,
                             "Error",
                             "Username already exists.");
    }
}
void MainWindow::on_loginButton_clicked()
{
    QString userName =ui->userNameEdit->text();
    QString password = ui->passwordEdit->text();

    if(authService.login(userName,password))
    {
        QMessageBox::information(this,"Success","","Welcome");
    }
    else
    {
        QMessageBox::warning(this,"Error","Invalid username or password." );
    }
}