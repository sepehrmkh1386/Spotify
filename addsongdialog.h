#ifndef ADDSONGDIALOG_H
#define ADDSONGDIALOG_H

#include <QDialog>
#include "song.h"
namespace Ui {
class AddSongDialog;
}

class AddSongDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddSongDialog(QWidget *parent = nullptr);
    ~AddSongDialog();
void setSong(Song* song);

private slots:
    void on_chooseSongButton_clicked();

    void on_chooseCoverButton_clicked();

    void on_saveButton_clicked();




private:
    Ui::AddSongDialog *ui;

    QString selectedSongPath;
    QString selectedCoverPath;
    Song* editingSong = nullptr;
};

#endif // ADDSONGDIALOG_H
