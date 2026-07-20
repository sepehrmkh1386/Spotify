#include "listenerdashboard.h"
#include "ui_listenerdashboard.h"

#include "repositorymanager.h"
#include "mainwindow.h"
#include "albumviewerdialog.h"
#include "createplaylistdialog.h"

#include <QListWidgetItem>
#include <QMessageBox>

ListenerDashboard::ListenerDashboard(Listener *listener ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ListenerDashboard)
{
    ui->setupUi(this);
    currentListener = listener;
    loadSongs();
    loadAlbums();
    loadPlaylists();
}

ListenerDashboard::~ListenerDashboard()
{
    delete ui;
}

void ListenerDashboard::loadSongs()
{
    ui->songsList->clear();

    QList<Song> songs =
        RepositoryManager::instance().songs().getAll();

    for(const Song &song : songs)
    {
        QString text =
            QString("%1   •   %2   •   %3")
                .arg(song.getName())
                .arg(song.getGenre())
                .arg(song.getReleaseYear());

        QListWidgetItem *item =
            new QListWidgetItem(text);

        item->setData(Qt::UserRole, song.getId());

        ui->songsList->addItem(item);
    }
}

void ListenerDashboard::loadAlbums()
{
    ui->albumsList->clear();

    QList<Album> albums =
        RepositoryManager::instance().albums().getAll();

    for(const Album &album : albums)
    {
        QListWidgetItem *item =
            new QListWidgetItem(album.getName());

        item->setData(Qt::UserRole, album.getId());

        ui->albumsList->addItem(item);
    }
}

void ListenerDashboard::loadPlaylists()
{
    ui->playlistsList->clear();

    QList<Playlist> playlists =
        RepositoryManager::instance().playlists().getAll();

    for(const Playlist &playlist : playlists)
    {
        QListWidgetItem *item =
            new QListWidgetItem(playlist.getName());

        item->setData(Qt::UserRole, playlist.getId());

        ui->playlistsList->addItem(item);
    }
}

void ListenerDashboard::on_logoutButton_clicked()
{
    MainWindow *login = new MainWindow();

    login->show();

    close();
}

void ListenerDashboard::on_searchButton_clicked()
{
    QString keyword =
        ui->searchEdit->text().trimmed();
    if(keyword.isEmpty())
    {
        loadSongs();
        loadAlbums();
        return;
    }
    ui->songsList->clear();
    ui->albumsList->clear();

    QList<Song> songs =
        RepositoryManager::instance().songs().getAll();

    for(const Song &song : songs)
    {
        if(!song.getName().contains(keyword,
                                     Qt::CaseInsensitive))
            continue;

        QString text =
            QString("%1   •   %2   •   %3")
                .arg(song.getName())
                .arg(song.getGenre())
                .arg(song.getReleaseYear());

        QListWidgetItem *item =
            new QListWidgetItem(text);

        item->setData(Qt::UserRole,
                      song.getId());

        ui->songsList->addItem(item);
    }

    QList<Album> albums =
        RepositoryManager::instance().albums().getAll();

    for(const Album &album : albums)
    {
        if(!album.getName().contains(keyword,
                                      Qt::CaseInsensitive))
            continue;

        QListWidgetItem *item =
            new QListWidgetItem(album.getName());

        item->setData(Qt::UserRole,
                      album.getId());

        ui->albumsList->addItem(item);
    }
}

void ListenerDashboard::on_albumsList_itemDoubleClicked(QListWidgetItem *item)
{
    if(item == nullptr)
        return;

    int albumId = item->data(Qt::UserRole).toInt();

    Album *album =
        RepositoryManager::instance().albums().getById(albumId);

    if(album == nullptr)
        return;

    AlbumViewerDialog dialog(this);

    dialog.setAlbum(*album);

    dialog.exec();
}

void ListenerDashboard::loadPlaylistSongs(int playlistId)
{

    ui->playlistSongsList->clear();

    Playlist *playlist =
        RepositoryManager::instance().playlists().getById(playlistId);

    if(playlist == nullptr)
        return;

    QList<int> songIds = playlist->getSongIds();

    for(int id : songIds)
    {
        Song *song =
            RepositoryManager::instance().songs().getById(id);

        if(song == nullptr)
            continue;

        QString text =
            QString("%1   •   %2   •   %3")
                .arg(song->getName())
                .arg(song->getGenre())
                .arg(song->getReleaseYear());

        QListWidgetItem *item =
            new QListWidgetItem(text);

        item->setData(Qt::UserRole, song->getId());


        ui->playlistSongsList->addItem(item);
    }
}
void ListenerDashboard::on_playlistsList_itemClicked(QListWidgetItem *item)
{
    if(item == nullptr)
        return;

    int playlistId = item->data(Qt::UserRole).toInt();

    loadPlaylistSongs(playlistId);
}


void ListenerDashboard::on_addToPlaylistButton_clicked()
{
    QListWidgetItem *songItem = ui->songsList->currentItem();
    QListWidgetItem *playlistItem = ui->playlistsList->currentItem();

    if(songItem == nullptr || playlistItem == nullptr)
    {
        QMessageBox::warning(
            this,
            "Error",
            "Please select both a song and a playlist."
            );
        return;
    }

    int songId = songItem->data(Qt::UserRole).toInt();
    int playlistId = playlistItem->data(Qt::UserRole).toInt();

    Playlist *playlist =
        RepositoryManager::instance().playlists().getById(playlistId);

    if(playlist == nullptr)
        return;

    playlist->addSong(songId);

    RepositoryManager::instance().playlists().update(*playlist);

    loadPlaylistSongs(playlistId);

    QMessageBox::information(
        this,
        "Success",
        "Song added to playlist."
        );
}





void ListenerDashboard::on_removeFromPlaylistButton_clicked()
{
    QListWidgetItem *songItem =
        ui->playlistSongsList->currentItem();

    QListWidgetItem *playlistItem =
        ui->playlistsList->currentItem();

    if(songItem == nullptr || playlistItem == nullptr)
    {
        QMessageBox::warning(
            this,
            "Error",
            "Please select a playlist and a song."
            );
        return;
    }

    int songId =
        songItem->data(Qt::UserRole).toInt();

    int playlistId =
        playlistItem->data(Qt::UserRole).toInt();

    Playlist *playlist =
        RepositoryManager::instance().playlists().getById(playlistId);

    if(playlist == nullptr)
        return;

    playlist->removeSong(songId);

    RepositoryManager::instance().playlists().update(*playlist);

    loadPlaylistSongs(playlistId);

    QMessageBox::information(
        this,
        "Success",
        "Song removed from playlist."
        );
}




void ListenerDashboard::on_createPlaylistButton_clicked()
{
    CreatePlaylistDialog dialog(this);

    dialog.setListenerId(currentListener->getId());

    if(dialog.exec() == QDialog::Accepted)
    {
        loadPlaylists();
    }
}

