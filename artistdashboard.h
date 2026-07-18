#ifndef ARTISTDASHBOARD_H
#define ARTISTDASHBOARD_H

#include <QMainWindow>
#include "addsongdialog.h"
#include <QListWidget>

namespace Ui {
class ArtistDashboard;
}

class ArtistDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit ArtistDashboard(QWidget *parent = nullptr);
    ~ArtistDashboard();

private slots:
    void on_addSongButton_clicked();

    void on_logoutButton_clicked();

    void on_deleteSongButton_clicked();

    void on_editSongButton_clicked();

    void on_addAlbumButton_clicked();



    void on_AlbumList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::ArtistDashboard *ui;
    void loadSongs();
    void loadAlbums();
};

#endif // ARTISTDASHBOARD_H
