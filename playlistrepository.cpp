#include "playlistrepository.h"

#include <QFile>
#include <QTextStream>
#include <QStringList>

PlaylistRepository::PlaylistRepository()
{
}

void PlaylistRepository::add(const Playlist &item)
{
    data.append(item);
    save();
}

void PlaylistRepository::remove(int id)
{
    for(int i = 0; i < data.size(); i++)
    {
        if(data[i].getId() == id)
        {
            data.removeAt(i);
            save();
            return;
        }
    }
}

void PlaylistRepository::update(const Playlist &item)
{
    for(int i = 0; i < data.size(); i++)
    {
        if(data[i].getId() == item.getId())
        {
            data[i] = item;
            save();
            return;
        }
    }
}

Playlist* PlaylistRepository::getById(int id)
{
    for(int i = 0; i < data.size(); i++)
    {
        if(data[i].getId() == id)
            return &data[i];
    }

    return nullptr;
}

QList<Playlist> PlaylistRepository::getAll()
{
    return data;
}

int PlaylistRepository::generateNextId()
{
    int maxId = 0;

    for(const Playlist &playlist : data)
    {
        if(playlist.getId() > maxId)
            maxId = playlist.getId();
    }

    return maxId + 1;
}

void PlaylistRepository::save()
{
    QFile file("Data/playlists.txt");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for(const Playlist &playlist : data)
    {
        out << playlist.getId() << "|";
        out << playlist.getName() << "|";
        out << playlist.getListenerId() << "|";

        QList<int> songs = playlist.getSongIds();

        for(int i = 0; i < songs.size(); i++)
        {
            out << songs[i];

            if(i != songs.size() - 1)
                out << ",";
        }

        out << "\n";
    }

    file.close();
}

void PlaylistRepository::load()
{
    data.clear();

    QFile file("Data/playlists.txt");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();

        if(line.isEmpty())
            continue;

        QStringList parts = line.split('|');

        if(parts.size() != 4)
            continue;

        Playlist playlist(
            parts[0].toInt(),
            parts[1],
            parts[2].toInt()
            );

        QList<int> songs;

        if(!parts[3].isEmpty())
        {
            QStringList ids = parts[3].split(',');

            for(const QString &id : ids)
                songs.append(id.toInt());
        }

        playlist.setSongIds(songs);

        data.append(playlist);
    }

    file.close();
}