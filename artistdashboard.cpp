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
