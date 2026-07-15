#include "repositorymanager.h"

RepositoryManager::RepositoryManager()
{
    artistRepository.load();
    listenerRepository.load();
    songRepository.load();
    albumRepository.load();
    playlistRepository.load();
}
RepositoryManager&RepositoryManager::instance()
{
    static RepositoryManager manager;
    return manager;
}

ArtistRepository& RepositoryManager::artists()
{
    return artistRepository;
}

ListenerRepository& RepositoryManager::listeners()
{
    return listenerRepository;
}

SongRepository& RepositoryManager::songs()
{
    return songRepository;
}

AlbumRepository& RepositoryManager::albums()
{
    return albumRepository;
}

PlaylistRepository& RepositoryManager::playlists()
{
    return playlistRepository;
}
