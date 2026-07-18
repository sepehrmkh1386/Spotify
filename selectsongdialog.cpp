#include "selectsongdialog.h"
#include "ui_selectsongdialog.h"

#include <QListWidgetItem>
#include <QMessageBox>

#include "repositorymanager.h"

SelectSongDialog::SelectSongDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SelectSongDialog)
{
    ui->setupUi(this);

    m_selectedSongId = -1;

    loadSongs();
}

SelectSongDialog::~SelectSongDialog()
{
    delete ui;
}

void SelectSongDialog::loadSongs()
{
    ui->songsList->clear();

    QList<Song> songs =
        RepositoryManager::instance().songs().getAll();

    for(const Song &song : songs)
    {
        if(song.getAlbumId() != 0)
            continue;

        QString text =
            song.getName() + "  •  " +
            song.getGenre() + "  •  " +
            QString::number(song.getReleaseYear());

        QListWidgetItem *item =
            new QListWidgetItem(text);

        item->setData(Qt::UserRole, song.getId());

        ui->songsList->addItem(item);
    }
}

int SelectSongDialog::selectedSongId() const
{
    return m_selectedSongId;
}

void SelectSongDialog::on_addButton_clicked()
{
    QListWidgetItem *item = ui->songsList->currentItem();

    if(item == nullptr)
    {
        QMessageBox::warning(
            this,
            "Error",
            "Please select a song."
            );

        return;
    }

    m_selectedSongId =
        item->data(Qt::UserRole).toInt();

    accept();
}

void SelectSongDialog::on_cancelButton_clicked()
{
    reject();
}