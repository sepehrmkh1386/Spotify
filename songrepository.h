#ifndef SONGREPOSITORY_H
#define SONGREPOSITORY_H

#include "abstractrepository.h"
#include "song.h"

class SongRepository:public AbstractRepository<Song>
{
public:
    SongRepository();

    void add(const Song &item) override;
    void remove(int id) override;
    void update(const Song &item) override;
    Song* getById(int id) override;
    QList<Song> getAll() override;

    void load()override;
    void save()override;

    int generateNextId();
};

#endif // SONGREPOSITORY_H
