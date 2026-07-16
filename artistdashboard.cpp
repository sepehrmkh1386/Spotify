#include "artistdashboard.h"
#include "ui_artistdashboard.h"

ArtistDashboard::ArtistDashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ArtistDashboard)
{
    ui->setupUi(this);
}

ArtistDashboard::~ArtistDashboard()
{
    delete ui;
}

void ArtistDashboard::on_addSongButton_clicked()
{
    AddSongDialog dialog(this);
    dialog.exec();
}

