#include "listenerdashboard.h"
#include "ui_listenerdashboard.h"

#include "repositorymanager.h"
#include "mainwindow.h"

#include <QListWidgetItem>

ListenerDashboard::ListenerDashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ListenerDashboard)
{
    ui->setupUi(this);

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
    Q_UNUSED(item)

    // مرحله بعد پیاده‌سازی می‌کنیم
}