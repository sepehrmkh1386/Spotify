#ifndef LISTENERDASHBOARD_H
#define LISTENERDASHBOARD_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class ListenerDashboard;
}

class ListenerDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListenerDashboard(QWidget *parent = nullptr);
    ~ListenerDashboard();

private slots:
    void on_logoutButton_clicked();

    void on_searchButton_clicked();

    void on_albumsList_itemDoubleClicked(QListWidgetItem *item);

private:
    void loadSongs();
    void loadAlbums();
    void loadPlaylists();

    Ui::ListenerDashboard *ui;
};

#endif // LISTENERDASHBOARD_H