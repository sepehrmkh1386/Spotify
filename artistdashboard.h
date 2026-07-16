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

private:
    Ui::ArtistDashboard *ui;
};

#endif // ARTISTDASHBOARD_H
