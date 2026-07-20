#ifndef CREATEPLAYLISTDIALOG_H
#define CREATEPLAYLISTDIALOG_H

#include <QDialog>

namespace Ui {
class CreatePlaylistDialog;
}

class CreatePlaylistDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreatePlaylistDialog(QWidget *parent = nullptr);
    ~CreatePlaylistDialog();

    void setListenerId(int id);

private slots:
    void on_createButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::CreatePlaylistDialog *ui;

    int listenerId;
};

#endif // CREATEPLAYLISTDIALOG_H