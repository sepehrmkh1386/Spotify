#include "playlist.h"

Playlist::Playlist()
{
}

Playlist::Playlist(int id,
                   QString name,
                   int listenerId)
{
    this->id = id;
    this->name = name;
    this->listenerId = listenerId;
}

// Getters

int Playlist::getId() const
{
    return id;
}

QString Playlist::getName() const
{
    return name;
}

int Playlist::getListenerId() const
{
    return listenerId;
}

QList<int> Playlist::getSongIds() const
{
    return songIds;
}

// Setters

void Playlist::setName(const QString &name)
{
    this->name = name;
}

void Playlist::setListenerId(int listenerId)
{
    this->listenerId = listenerId;
}

void Playlist::setSongIds(const QList<int> &songs)
{
    songIds = songs;
}

// Song Management

void Playlist::addSong(int songId)
{
    if(!songIds.contains(songId))
        songIds.append(songId);
}

void Playlist::removeSong(int songId)
{
    songIds.removeOne(songId);
}