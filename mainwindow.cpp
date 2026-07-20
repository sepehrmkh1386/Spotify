#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

#include "artist.h"
#include "listener.h"

#include "artistdashboard.h"
#include "listenerdashboard.h"

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
        QMessageBox::information(
            this,
            "Success",
            "Account created successfully!"
            );
    }
    else
    {
        QMessageBox::warning(
            this,
            "Error",
            "Username already exists."
            );
    }
}

void MainWindow::on_loginButton_clicked()
{
    QString userName = ui->userNameEdit->text();
    QString password = ui->passwordEdit->text();

    if(!authService.login(userName, password))
    {
        QMessageBox::warning(
            this,
            "Error",
            "Invalid username or password."
            );
        return;
    }

    Account *user = authService.getCurrentUser();

    if(user == nullptr)
    {
        QMessageBox::warning(
            this,
            "Error",
            "User not found."
            );
        return;
    }

    if(user->getRole() == Role::Artist)
    {
        ArtistDashboard *dashboard = new ArtistDashboard();

        dashboard->show();

        close();
    }
    else if(user->getRole() == Role::Listener)
    {
        Listener *listener = dynamic_cast <Listener*>(user);

        if(listener == nullptr)
        {
            QMessageBox::warning(this,
                                 "Error",
                                 "Listener not found.");
            return;
        }

        ListenerDashboard *dashboard = new ListenerDashboard(listener);

        dashboard->show();

        close();
    }
}