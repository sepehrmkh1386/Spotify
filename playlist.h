#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QString>
#include <QList>

class Playlist
{
private:
    int id;
    QString name;
    int listenerId;
    QList<int> songIds;

public:
    Playlist();

    Playlist(int id,
             QString name,
             int listenerId);

    // Getters
    int getId() const;
    QString getName() const;
    int getListenerId() const;
    QList<int> getSongIds() const;

    // Setters
    void setName(const QString &name);
    void setListenerId(int listenerId);
    void setSongIds(const QList<int> &songs);

    // Song Management
    void addSong(int songId);
    void removeSong(int songId);
};

#endif // PLAYLIST_H