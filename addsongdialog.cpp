#include "addsongdialog.h"
#include "ui_addsongdialog.h"

#include <QFileDialog>
#include<QPixmap>
#include "repositorymanager.h"
#include "authenticationservice.h"
#include <QMessageBox>
AddSongDialog::AddSongDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddSongDialog)
{
    ui->setupUi(this);
}

AddSongDialog::~AddSongDialog()
{
    delete ui;
}

void AddSongDialog::on_chooseSongButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Select MP3 File","","MP3 Files (*.mp3)");

    if(fileName.isEmpty())
        return;
    selectedSongPath = fileName;
    ui->songPathEdit->setText(fileName);
}


void AddSongDialog::on_chooseCoverButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Select Cover","","Images(*.png *.jpg *.jpeg)");
    if(fileName.isEmpty())
        return;

    QPixmap pixmap(fileName);

    selectedCoverPath = fileName;
    ui->coverLabel->setPixmap(pixmap.scaled(ui->coverLabel->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}


void AddSongDialog::on_saveButton_clicked()
{
    QString name = ui->SongNameEdit->text();
    int year = ui->releaseYearSpinBox->value();
    QString genre = ui->GenreComboBox->currentText();

    if(name.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Song name is required.");
        return;
    }

    if(selectedSongPath.isEmpty())
    {
        QMessageBox::warning(this,
                             "Error",
                             "Please choose an MP3 file.");
        return;
    }

    SongRepository &repo = RepositoryManager::instance().songs();

    int id = repo.generateNextId();

    int artistId = 0;
    int albumId = 0;

    Song song(id,
              name,
              year,
              genre,
              selectedSongPath,
              artistId,
              albumId,
              selectedCoverPath);

    repo.add(song);

    QMessageBox::information(this,
                             "Success",
                             "Song added successfully.");

    accept();
}

