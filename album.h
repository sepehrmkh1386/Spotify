#ifndef ALBUM_H
#define ALBUM_H

#include <QString>

class Album
{
private:
    int id;
    QString  name;
    int releaseYear;
    int artistId;
    QString cover;
public:
    Album();
    Album(int id,
          QString name,
          int releaseYear,
          int artistId,
          QString cover);

//Getter
    int getId()const;
    QString getName()const;
    int getReleaseYear()const;
    int getArtistId()const;
    QString getCover() const;

//Setter
    void setName(const QString &name);
    void setReleaseYear(int releaseYear);
    void setArtistId(int artistId);
    void setCover(const QString &cover);
};

#endif // ALBUM_H
