#include "songrepository.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>

SongRepository::SongRepository()
{
}

void SongRepository::add(const Song &item)
{
    data.append(item);
    save();
}

void SongRepository::remove(int id)
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

void SongRepository::update(const Song &item)
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

Song* SongRepository::getById(int id)
{
    for(int i = 0; i < data.size(); i++)
    {
        if(data[i].getId() == id)
            return &data[i];
    }

    return nullptr;
}

QList<Song> SongRepository::getAll()
{
    return data;
}

void SongRepository::save()
{
    QFile file("Data/songs.txt");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for(int i = 0; i < data.size(); i++)
    {
        const Song &song = data.at(i);

        out << song.getId() << "|"
            << song.getName() << "|"
            << song.getReleaseYear() << "|"
            << song.getGenre() << "|"
            << song.getFileName() << "|"
            << song.getArtistId() << "|"
            << song.getAlbumId() << "|"
            << song.getCover()
            << "\n";
    }

    file.close();
}

void SongRepository::load()
{
    data.clear();

    QFile file("Data/songs.txt");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();

        if(line.isEmpty())
            continue;

        QStringList parts = line.split('|');

        if(parts.size() != 8)
            continue;

        Song song(
            parts[0].toInt(),
            parts[1],
            parts[2].toInt(),
            parts[3],
            parts[4],
            parts[5].toInt(),
            parts[6].toInt(),
            parts[7]
            );

        data.append(song);
    }

    file.close();
}
