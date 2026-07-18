#include "albumviewerdialog.h"
#include "ui_albumviewerdialog.h"


#include "repositorymanager.h"

#include <QPixmap>
#include <QListWidget>

AlbumViewerDialog::AlbumViewerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AlbumViewerDialog)
{
    ui->setupUi(this);
}

AlbumViewerDialog::~AlbumViewerDialog()
{
    delete ui;
}

void AlbumViewerDialog::setAlbum(const Album &album)
{
    currentAlbum = album;

    ui->titleLabel->setText(album.getName());

    ui->albumNameLabel->setText(
        "Album : " + album.getName());

    ui->releaseYearLabel->setText(
        "Release Year : " +
        QString::number(album.getReleaseYear()));

    QPixmap pix(album.getCover());

    ui->coverLabel->setPixmap(
        pix.scaled(ui->coverLabel->size(),
                   Qt::KeepAspectRatio,
                   Qt::SmoothTransformation));

    loadSongs();
}

void AlbumViewerDialog::loadSongs()
{
    ui->songsList->clear();

    QList<Song> songs =
        RepositoryManager::instance().songs().getAll();

    for(const Song &song : songs)
    {
        if(song.getAlbumId() != currentAlbum.getId())
            continue;

        QListWidgetItem *item =
            new QListWidgetItem(song.getName());

        item->setData(Qt::UserRole,
                      song.getId());

        ui->songsList->addItem(item);
    }
}


void AlbumViewerDialog::on_closeButton_clicked()
{
    close();
}

