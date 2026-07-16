#ifndef ARTISTDASHBOARD_H
#define ARTISTDASHBOARD_H

#include <QMainWindow>

namespace Ui {
class ArtistDashboard;
}

class ArtistDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit ArtistDashboard(QWidget *parent = nullptr);
    ~ArtistDashboard();

private:
    Ui::ArtistDashboard *ui;
};

#endif // ARTISTDASHBOARD_H
