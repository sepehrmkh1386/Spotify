#ifndef PLAYLISTREPOSITORY_H
#define PLAYLISTREPOSITORY_H

#include"abstractrepository.h"
#include"playlist.h"


class PlaylistRepository :public AbstractRepository<Playlist>
{
public:
    PlaylistRepository();

    void add(const Playlist &item) override;
    void remove(int id)override;
    void update(const Playlist &item)override;
    int generateNextId();
    Playlist* getById(int id) override;
    QList<Playlist> getAll()override;

    void load() override;
    void save()override;
};

#endif // PLAYLISTREPOSITORY_H
