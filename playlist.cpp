#include "playlist.h"

Playlist::Playlist()
{

}

Playlist::Playlist(int id,
                   QString name,
                   int ListenerId)
{
    this->id = id;
    this->name = name;
    this->ListenerId = ListenerId;
}
//Getter
int Playlist::getId()const
{
    return id;
}
QString Playlist::getName()const
{
    return name;
}
int Playlist::getListenerId()const
{
    return ListenerId;
}
QList<int> Playlist::getSongIds()const
{
    return songIds;
}
//Setter
void Playlist::setName(const QString &name)
{
    this-> name = name;
}
void Playlist::setListenerId(int ListenerId)
{
    this->ListenerId=ListenerId;
}
void Playlist::addSong(int songId)
{
    songIds.append(songId);
}
void Playlist::removeSong(int songId)
{
    songIds.removeOne(songId);
}