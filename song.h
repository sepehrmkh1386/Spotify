#ifndef SONG_H
#define SONG_H

#include <QString>

class Song
{
private:
    int id;
    QString name;
    int releaseYear;
    QString genre;
    QString fileName;
    int artistId;
    int albumId;
    QString cover;
public:
    Song();

    Song(int id,
         QString name,
         int releaseYear,
         QString genre,
         QString fileName,
         int atristId,
         int albumId,
         QString cover);

    //Getter
    int getId()const;
    QString getName()const;
    int getReleaseYear()const;
    QString getGenre()const;
    QString getFileName()const;
    int getArtistId()const;
    int getAlbumId()const;
    QString getCover()const;

    //Setter
    void setName(const QString &name);
    void setReleaseYear(int releaseYear);
    void setGenre(const QString &genre);
    void setFileName(const QString &fileName);
    void setArtistId(int artistId);
    void setAlbumId(int albumId);
    void setCover(const QString &cover);
};

#endif // SONG_H
