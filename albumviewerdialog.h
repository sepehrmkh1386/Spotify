#ifndef ALBUMVIEWERDIALOG_H
#define ALBUMVIEWERDIALOG_H

#include <QDialog>

#include "album.h"

namespace Ui {
class AlbumViewerDialog;
}

class AlbumViewerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlbumViewerDialog(QWidget *parent = nullptr);
    ~AlbumViewerDialog();

    void setAlbum(const Album &album);

private slots:
    void on_closeButton_clicked();



private:
    void loadSongs();

    Ui::AlbumViewerDialog *ui;

    Album currentAlbum;
};

#endif // ALBUMVIEWERDIALOG_H