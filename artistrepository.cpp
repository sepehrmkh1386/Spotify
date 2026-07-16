#include "artistrepository.h"
#include <QFile>
#include <QTextStream>
#include<QStringList>

ArtistRepository::ArtistRepository()
{
}

void ArtistRepository::add(const Artist &item)
{
    data.append(item);
    save();
}

void ArtistRepository::remove(int id)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getId() == id)
        {
            data.removeAt(i);
            return;
        }
    }
}

void ArtistRepository::update(const Artist &item)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getId() == item.getId())
        {
            data[i] = item;
            return;
        }
    }
}
int ArtistRepository::generateNextId()
{
    if (data.isEmpty())
        return 1;

    int maxId = data[0].getId();

    for (int i = 1; i < data.size(); i++)
    {
        if (data[i].getId() > maxId)
            maxId = data[i].getId();
    }

    return maxId + 1;
}

Artist* ArtistRepository::getById(int id)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getId() == id)
            return &data[i];
    }

    return nullptr;
}

QList<Artist> ArtistRepository::getAll()
{
    return data;
}

Artist* ArtistRepository::searchByUserName(const QString &userName)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getUserName() == userName)
            return &data[i];
    }

    return nullptr;
}

void ArtistRepository::load()
{
    data.clear();

    QFile file("Data/artists.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    while (!in.atEnd())
    {
        QString line = in.readLine();

        if (line.isEmpty())
            continue;

        QStringList parts = line.split('|');

        if (parts.size() != 6)
            continue;

        Artist artist(
            parts[0].toInt(),
            parts[1],
            parts[2],
            parts[3],
            parts[4],
            parts[5]
            );

        data.append(artist);
    }

    file.close();
}

void ArtistRepository::save()
{

    QFile file("Data/artists.txt");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for (int i=0;i<data.size();++i)
    {
        const Artist &artist =data.at(i);
        out << artist.getId() << "|"
            << artist.getFullName() << "|"
            << artist.getUserName() << "|"
            << artist.getBiography() << "|"
            << artist.getPassword() << "|"
            << artist.getProfilePhoto()
            << "\n";
    }

    file.close();
}