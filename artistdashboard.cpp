#include "artistdashboard.h"
#include "ui_artistdashboard.h"

#include "mainwindow.h"
#include "repositorymanager.h"
#include "addsongdialog.h"
#include <QMessageBox>
#include <QListWidgetItem>
#include"addalbumdialog.h"
#include "albumdetailsdialog.h"
ArtistDashboard::ArtistDashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ArtistDashboard)
{
    ui->setupUi(this);
    loadSongs();
    loadAlbums();
}

ArtistDashboard::~ArtistDashboard()
{
    delete ui;
}

void ArtistDashboard::on_addSongButton_clicked()
{
    AddSongDialog dialog(this);
    if(dialog.exec() == QDialog::Accepted)
    {
        loadSongs();
    }
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

    for(const Song &song : songs)
    {
        QString text = QString("%1   •   %2   •   %3")
                           .arg(song.getName())
                           .arg(song.getGenre())
                           .arg(song.getReleaseYear());

        QListWidgetItem *item = new QListWidgetItem(text);

        item->setData(Qt::UserRole, song.getId());

        ui->SongsList->addItem(item);
    }
}

void ArtistDashboard::on_deleteSongButton_clicked()
{
    QListWidgetItem *item = ui->SongsList->currentItem();

    if(item == nullptr)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }

    int songId = item->data(Qt::UserRole).toInt();

    RepositoryManager::instance().songs().remove(songId);

    loadSongs();

    QMessageBox::information(this,
                             "Success",
                             "Song deleted successfully.");
}

void ArtistDashboard::on_editSongButton_clicked()
{
    QListWidgetItem *item = ui ->SongsList->currentItem();

    if(item == nullptr)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please select a song.");
        return;
    }
    int songId = item->data(Qt::UserRole).toInt();

    Song *song =
        RepositoryManager::instance().songs().getById(songId);

    if(song == nullptr)
    {
        QMessageBox::warning(this,
                             "Error",
                             "Song not found.");
        return;
    }

    AddSongDialog dialog(this);

    dialog.setSong(song);

    if(dialog.exec() == QDialog::Accepted)
    {
        loadSongs();
    }
}
void ArtistDashboard::loadAlbums()
{
    ui->AlbumList->clear();

    QList<Album> albums = RepositoryManager::instance().albums().getAll();

    for(const Album &album :albums)
    {
        QListWidgetItem *item = new QListWidgetItem(album.getName());
        item->setData(Qt::UserRole , album.getId());

        ui->AlbumList->addItem(item);
    }
}

void ArtistDashboard::on_addAlbumButton_clicked()
{
    AddAlbumDialog dialog(this);

    if(dialog.exec() == QDialog::Accepted)
    {
        loadAlbums();
    }
}


void ArtistDashboard::on_AlbumList_itemDoubleClicked(QListWidgetItem *item)
{
    if(item == nullptr)
        return;

    int albumId = item->data(Qt::UserRole).toInt();

    Album *album =
        RepositoryManager::instance().albums().getById(albumId);

    if(album == nullptr)
        return;

    AlbumDetailsDialog dialog(this);

    dialog.setAlbum(*album);

    dialog.exec();
}
