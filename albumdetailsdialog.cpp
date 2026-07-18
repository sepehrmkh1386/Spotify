#include "albumdetailsdialog.h"
#include "ui_albumdetailsdialog.h"

#include <QListWidgetItem>

#include "repositorymanager.h"
#include "selectsongdialog.h"

AlbumDetailsDialog::AlbumDetailsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AlbumDetailsDialog)
{
    ui->setupUi(this);
}

AlbumDetailsDialog::~AlbumDetailsDialog()
{
    delete ui;
}

void AlbumDetailsDialog::setAlbum(const Album &album)
{
    currentAlbum = album;

    ui->albumNameLabel->setText(album.getName());

    loadSongs();
}

void AlbumDetailsDialog::loadSongs()
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

        item->setData(Qt::UserRole, song.getId());

        ui->songsList->addItem(item);
    }
}

void AlbumDetailsDialog::on_addSongButton_clicked()
{
    SelectSongDialog dialog(this);

    if(dialog.exec() != QDialog::Accepted)
        return;

    int songId = dialog.selectedSongId();

    Song *song =
        RepositoryManager::instance().songs().getById(songId);

    if(song == nullptr)
        return;

    song->setAlbumId(currentAlbum.getId());

    RepositoryManager::instance().songs().update(*song);

    loadSongs();
}
void AlbumDetailsDialog::on_removeSongButton_clicked()
{
    // مرحله بعد پیاده‌سازی می‌کنیم
}

void AlbumDetailsDialog::on_closeButton_clicked()
{
    close();
}