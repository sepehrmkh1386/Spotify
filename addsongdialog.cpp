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

    if(editingSong == nullptr)
    {
        int id = repo.generateNextId();

        Song song(id,
                  name,
                  year,
                  genre,
                  selectedSongPath,
                  0,
                  0,
                  selectedCoverPath);

        repo.add(song);
    }
    else
    {
        editingSong->setName(name);
        editingSong->setReleaseYear(year);
        editingSong->setGenre(genre);
        editingSong->setFileName(selectedSongPath);
        editingSong->setCover(selectedCoverPath);

        repo.update(*editingSong);
    }
    if(editingSong == nullptr)
    {
        QMessageBox::information(this,
                             "Success",
                                 "Song added successfully.");
    }

    else
    {
        QMessageBox::information(this,
                                 "Success",
                                 "Song updated successfully");
    }
}
void AddSongDialog::setSong(Song *song)
{
    editingSong = song;

    ui->SongNameEdit->setText(song->getName());
    ui->releaseYearSpinBox->setValue(song->getReleaseYear());

    ui->GenreComboBox->setCurrentText(song->getGenre());

    selectedSongPath = song->getFileName();
    selectedCoverPath = song->getCover();

    ui->songPathEdit->setText(selectedSongPath);

    if(!selectedCoverPath.isEmpty())
    {
        QPixmap pixmap(selectedCoverPath);

        ui->coverLabel->setPixmap(
            pixmap.scaled(ui->coverLabel->size(),
                          Qt::KeepAspectRatio,
                          Qt::SmoothTransformation));
    }

    ui->saveButton->setText("Save Changes");
}
