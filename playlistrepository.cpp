#include "playlistrepository.h"
#include<QFile>
#include<QTextStream>
#include<QStringList>

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

void PlaylistRepository::save()
{
    QFile file("Data/playlists.txt");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for(int i = 0; i < data.size(); i++)
    {
        const Playlist &playlist = data.at(i);

        out << playlist.getId() << "|"
            << playlist.getName() << "|"
            << playlist.getListenerId()
            << "\n";
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

        if(parts.size() != 3)
            continue;

        Playlist playlist(
            parts[0].toInt(),
            parts[1],
            parts[2].toInt()
            );

        data.append(playlist);
    }

    file.close();
}
