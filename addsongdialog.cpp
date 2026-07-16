#include "addsongdialog.h"
#include "ui_addsongdialog.h"

AddSongDialog::AddSongDialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddSongDialog)
{
    ui->setupUi(this);
}

AddSongDialog::~AddSongDialog()
{
    delete ui;
}
