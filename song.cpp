#include "song.h"

Song::Song()
{

}
Song::Song(int id,
           QString name,
           int releaseYear,
           QString genre,
           QString fileName,
           int artistId,
           int albumId,
           QString cover)
{
    this->id = id;
    this->name = name;
    this->releaseYear = releaseYear;
    this->genre = genre;
    this->fileName = fileName;
    this->artistId = artistId;
    this->albumId = albumId;
    this->cover = cover;
}

// Getters

int Song::getId() const
{
    return id;
}

QString Song::getName() const
{
    return name;
}

int Song::getReleaseYear() const
{
    return releaseYear;
}

QString Song::getGenre() const
{
    return genre;
}

QString Song::getFileName() const
{
    return fileName;
}

int Song::getArtistId() const
{
    return artistId;
}

int Song::getAlbumId() const
{
    return albumId;
}

QString Song::getCover() const
{
    return cover;
}

// Setters

void Song::setName(const QString &name)
{
    this->name = name;
}

void Song::setReleaseYear(int releaseYear)
{
    this->releaseYear = releaseYear;
}

void Song::setGenre(const QString &genre)
{
    this->genre = genre;
}

void Song::setFileName(const QString &fileName)
{
    this->fileName = fileName;
}

void Song::setArtistId(int artistId)
{
    this->artistId = artistId;
}

void Song::setAlbumId(int albumId)
{
    this->albumId = albumId;
}

void Song::setCover(const QString &cover)
{
    this->cover = cover;
}