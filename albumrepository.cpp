#include "albumrepository.h"
#include"QFile"
#include "QtextStream"
#include "QStringList"

AlbumRepository::AlbumRepository()
{

}

void AlbumRepository::add(const Album &item)
{
    data.append(item);
    save();
}

void AlbumRepository::remove(int id)
{
    for(int i=0;i<data.size();i++)
    {
        if(data[i].getId() ==id)
        {

            data.removeAt(i);
            save();
            return;
        }
    }
}

void AlbumRepository::update(const Album &item)
{
    for(int i=0;i<data.size();i++)
    {
        if(data[i].getId() == item.getId())
        {
            data[i] = item;
            save();
            return;
        }
    }
}

Album* AlbumRepository::getById(int id)
{
    for(int i=0;i<data.size();i++)
    {
        if(data[i].getId() == id)
            return &data[i];
    }
    return nullptr;
}

QList<Album> AlbumRepository::getAll()
{
    return data;
}

void AlbumRepository::save()
{
    QFile file("Data/albums.txt");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for(int i = 0; i < data.size(); i++)
    {
        const Album &album = data.at(i);

        out << album.getId() << "|"
            << album.getName() << "|"
            <<album.getReleaseYear()<<"|"
            << album.getArtistId() << "|"
            << album.getCover()
            << "\n";
    }

    file.close();
}

void AlbumRepository::load()
{
    data.clear();

    QFile file("Data/albums.txt");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();

        if(line.isEmpty())
            continue;

        QStringList parts = line.split('|');

        if(parts.size() != 5)
            continue;

        Album album(
            parts[0].toInt(),
            parts[1],
            parts[2].toInt(),
            parts[3].toInt(),
            parts[4]
            );

        data.append(album);
    }

    file.close();
}
