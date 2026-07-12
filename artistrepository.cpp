#include "artistrepository.h"
#include <QFile>
#include <QTextStream>

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

}
void ArtistRepository::save()
{
    QFile file("Data/artists.txt");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for (const Artist &artist : data)
    {
        out << artist.getId() << "|"
            << artist.getFullName() << "|"
            << artist.getUserName() << "|"
            << artist.getBiography() << "|"
            << artist.getPassword() << "|"
            << static_cast<int>(artist.getRole()) << "|"
            << artist.getProfilePhoto()
            << "\n";
    }

    file.close();
}