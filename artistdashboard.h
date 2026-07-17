#ifndef ARTISTDASHBOARD_H
#define ARTISTDASHBOARD_H

#include <QMainWindow>
#include "addsongdialog.h"

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

private:
    Ui::ArtistDashboard *ui;
    void loadSongs();
};

#endif // ARTISTDASHBOARD_H
