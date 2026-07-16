#include "addsongdialog.h"
#include "ui_addsongdialog.h"

AddSongDialog::AddSongDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddSongDialog)
{
    ui->setupUi(this);
}

AddSongDialog::~AddSongDialog()
{
    delete ui;
}
