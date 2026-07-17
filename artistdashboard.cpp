#include "artistdashboard.h"
#include "ui_artistdashboard.h"

#include "mainwindow.h"
#include "repositorymanager.h"
ArtistDashboard::ArtistDashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ArtistDashboard)
{
    ui->setupUi(this);
    loadSongs();
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


void ArtistDashboard::on_logoutButton_clicked()
{
    MainWindow *login = new MainWindow();
    login->show();
    this->close();
}

void ArtistDashboard::loadSongs()
{
    ui->SongsList->clear();

    QList<Song> songs = RepositoryManager::instance().songs().getAll();

    for(const Song &song :songs)
    {
        QString text = song.getName() + "|" + song.getGenre() + "|" + QString::number(song.getReleaseYear());

        ui->SongsList->addItem(text);
    }

}
