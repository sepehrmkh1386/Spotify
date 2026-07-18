#ifndef SELECTSONGDIALOG_H
#define SELECTSONGDIALOG_H

#include <QDialog>

namespace Ui {
class SelectSongDialog;
}

class SelectSongDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SelectSongDialog(QWidget *parent = nullptr);
    ~SelectSongDialog();

    int selectedSongId() const;

private slots:
    void on_addButton_clicked();
    void on_cancelButton_clicked();

private:
    void loadSongs();

    Ui::SelectSongDialog *ui;

    int m_selectedSongId;
};

#endif // SELECTSONGDIALOG_H
