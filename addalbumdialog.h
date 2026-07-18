#ifndef ADDALBUMDIALOG_H
#define ADDALBUMDIALOG_H

#include <QDialog>

namespace Ui {
class AddAlbumDialog;
}

class AddAlbumDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddAlbumDialog(QWidget *parent = nullptr);
    ~AddAlbumDialog();

private slots:
    void on_chooseCoverButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::AddAlbumDialog *ui;
    QString selectedCoverPath;
};

#endif // ADDALBUMDIALOG_H
