#ifndef REPOSITORYMANAGER_H
#define REPOSITORYMANAGER_H

#include"artistrepository.h"
#include"listenerrepository.h"
#include"songrepository.h"
#include"albumrepository.h"
#include"playlistrepository.h"

class RepositoryManager
{
private:
    ArtistRepository artistRepository;
    ListenerRepository listenerRepository;
    SongRepository songRepository;
    AlbumRepository albumRepository;
    PlaylistRepository playlistRepository;

    RepositoryManager();
public:
    static RepositoryManager&instance();

    ArtistRepository& artists();
    ListenerRepository& listeners();
    SongRepository& songs();
    AlbumRepository& albums();
    PlaylistRepository& playlists();
};

#endif // REPOSITORYMANAGER_H
