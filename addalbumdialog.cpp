#include "addalbumdialog.h"
#include "ui_addalbumdialog.h"

#include <QFileDialog>
#include <QPixmap>
#include <QMessageBox>

#include "albumrepository.h"
#include "repositorymanager.h"

AddAlbumDialog::AddAlbumDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddAlbumDialog)
{
    ui->setupUi(this);
}

AddAlbumDialog::~AddAlbumDialog()
{
    delete ui;
}

void AddAlbumDialog::on_chooseCoverButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Select Cover","","Images(*.png *.jpg * .jpeg)");
    if(fileName.isEmpty())
        return;

    selectedCoverPath = fileName;

    QPixmap pixmap(fileName);

    ui->coverLabel->setPixmap(pixmap.scaled(ui->coverLabel->size(),
                                            Qt::KeepAspectRatio,
                                            Qt::SmoothTransformation));
}


void AddAlbumDialog::on_saveButton_clicked()
{
    QString name = ui->albumNameEdit->text();
    int year = ui->releaseYearSpinBox->value();

    if(name.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Album name is required.");
        return;
    }

    AlbumRepository &repo = RepositoryManager::instance().albums();

    Album album(
        repo.generateNextId(),
        name,
        year,
        0,
        selectedCoverPath
        );

    repo.add(album);

    QMessageBox::information(this,
                             "Success",
                             "Album created successfully.");

    accept();
}

