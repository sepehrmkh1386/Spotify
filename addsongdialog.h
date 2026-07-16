#ifndef ADDSONGDIALOG_H
#define ADDSONGDIALOG_H

#include <QMainWindow>

namespace Ui {
class AddSongDialog;
}

class AddSongDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddSongDialog(QWidget *parent = nullptr);
    ~AddSongDialog();

private:
    Ui::AddSongDialog *ui;
};

#endif // ADDSONGDIALOG_H
