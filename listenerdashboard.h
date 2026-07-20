#ifndef LISTENERDASHBOARD_H
#define LISTENERDASHBOARD_H

#include <QMainWindow>
#include <QListWidgetItem>

#include "listener.h"

namespace Ui {
class ListenerDashboard;
}

class ListenerDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListenerDashboard(Listener *listener,
                               QWidget *parent = nullptr);
    ~ListenerDashboard();

private slots:
    void on_logoutButton_clicked();

    void on_searchButton_clicked();

    void on_albumsList_itemDoubleClicked(QListWidgetItem *item);

    void on_playlistsList_itemClicked(QListWidgetItem *item);

    void on_addToPlaylistButton_clicked();

    void on_removeFromPlaylistButton_clicked();




    void on_createPlaylistButton_clicked();

private:
    Ui::ListenerDashboard *ui;

    Listener *currentListener;

    void loadSongs();
    void loadAlbums();
    void loadPlaylists();
    void loadPlaylistSongs(int playlistId);

};

#endif // LISTENERDASHBOARD_H