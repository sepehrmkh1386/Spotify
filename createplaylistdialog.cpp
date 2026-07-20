#include "createplaylistdialog.h"
#include "ui_createplaylistdialog.h"

#include <QMessageBox>

#include "repositorymanager.h"

CreatePlaylistDialog::CreatePlaylistDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreatePlaylistDialog)
{
    ui->setupUi(this);

    listenerId = -1;
}

CreatePlaylistDialog::~CreatePlaylistDialog()
{
    delete ui;
}

void CreatePlaylistDialog::setListenerId(int id)
{
    listenerId = id;
}

void CreatePlaylistDialog::on_createButton_clicked()
{
    QString name = ui->playlistNameEdit->text().trimmed();

    if(name.isEmpty())
    {
        QMessageBox::warning(
            this,
            "Error",
            "Please enter playlist name."
            );
        return;
    }

    Playlist playlist(
        RepositoryManager::instance()
            .playlists()
            .generateNextId(),
        name,
        listenerId
        );

    RepositoryManager::instance()
        .playlists()
        .add(playlist);

    accept();
}

void CreatePlaylistDialog::on_cancelButton_clicked()
{
    reject();
}