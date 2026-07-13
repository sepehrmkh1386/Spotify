#ifndef ALBUMREPOSITORY_H
#define ALBUMREPOSITORY_H

#include "abstractrepository.h"
#include "album.h"

class AlbumRepository:public AbstractRepository<Album>
{
public:
    AlbumRepository();

    void add(const Album &item)override;
    void remove(int id)override;
    void update(const Album &item)override;
    Album* getById(int id)override;
    QList<Album> getAll()override;

    void load()override;
    void save()override;
};

#endif // ALBUMREPOSITORY_H
