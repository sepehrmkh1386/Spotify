#ifndef ADDSONGDIALOG_H
#define ADDSONGDIALOG_H

#include <QDialog>

namespace Ui {
class AddSongDialog;
}

class AddSongDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddSongDialog(QWidget *parent = nullptr);
    ~AddSongDialog();

private:
    Ui::AddSongDialog *ui;
};

#endif // ADDSONGDIALOG_H
