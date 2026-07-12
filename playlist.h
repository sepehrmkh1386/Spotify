#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QString>
#include <QList>

class Playlist
{
private:
    int id;
    QString name;
    int ListenerId;
    QList<int> songIds;
public:
    Playlist();
    Playlist(int id,
             QString name,
             int ListenerId);

//Getter
    int getId() const;
    QString getName()const;
    int getListenerId()const;
    QList <int> getSongIds()const;
//Setter
    void setName(const QString &name);
    void setListenerId(int ListenerId);

    void addSong(int songId);
    void removeSong(int songId);

};

#endif // PLAYLIST_H
