#ifndef ALBUMDETAILSDIALOG_H
#define ALBUMDETAILSDIALOG_H

#include <QDialog>

#include "album.h"

namespace Ui {
class AlbumDetailsDialog;
}

class AlbumDetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlbumDetailsDialog(QWidget *parent = nullptr);
    ~AlbumDetailsDialog();

    void setAlbum(const Album &album);

private slots:
    void on_addSongButton_clicked();
    void on_removeSongButton_clicked();
    void on_closeButton_clicked();

private:
    void loadSongs();

    Ui::AlbumDetailsDialog *ui;

    Album currentAlbum;
};

#endif // ALBUMDETAILSDIALOG_H