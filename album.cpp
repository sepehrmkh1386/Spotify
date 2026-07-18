#include "album.h"


Album::Album()
{
}

Album::Album(int id,
             QString name,
             int releaseYear,
             int artistId,
             QString cover)
{
    this->id = id;
    this->name = name;
    this->releaseYear = releaseYear;
    this->artistId = artistId;
    this->cover = cover;
}

// Getters

int Album::getId() const
{
    return id;
}

QString Album::getName() const
{
    return name;
}

int Album::getReleaseYear()const
{
    return releaseYear;
}
int Album::getArtistId() const
{
    return artistId;
}

QString Album::getCover() const
{
    return cover;
}


// Setters

void Album::setName(const QString &name)
{
    this->name = name;
}

void Album::setArtistId(int artistId)
{
    this->artistId = artistId;
}

void Album::setCover(const QString &cover)
{
    this->cover = cover;
}

void Album::setReleaseYear(int releaseYear)
{
    this->releaseYear = releaseYear;
}