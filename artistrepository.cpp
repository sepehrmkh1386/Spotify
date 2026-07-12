#include "artistrepository.h"

ArtistRepository::ArtistRepository()
{
}

void ArtistRepository::add(const Artist &item)
{
    data.append(item);
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

}