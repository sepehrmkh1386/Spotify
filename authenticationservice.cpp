#include "authenticationservice.h"
#include "repositorymanager.h"

AuthenticationService::AuthenticationService()
{
    currentUser = nullptr;
}

Account* AuthenticationService::getCurrentUser() const
{
    return currentUser;
}

void AuthenticationService::logout()
{
    currentUser = nullptr;
}

bool AuthenticationService::registerArtist(const QString &fullName,
                                           const QString &userName,
                                           const QString &password)
{
    ArtistRepository &repo =
        RepositoryManager::instance().artists();

    if(repo.searchByUserName(userName) != nullptr)
    {
        return false;
    }

    Artist artist(
        repo.generateNextId(),
        fullName,
        userName,
        "",
        password,
        ""
        );

    repo.add(artist);

    return true;
}

bool AuthenticationService::registerListener(const QString &fullName,
                                             const QString &userName,
                                             const QString &password)
{
    ListenerRepository &repo =
        RepositoryManager::instance().listeners();

    if(repo.searchByUserName(userName) != nullptr)
    {
        return false;
    }

    Listener listener(
        repo.generateNextId(),
        fullName,
        userName,
        "",
        password,
        ""
        );

    repo.add(listener);

    // ---------- ساخت Playlist پیش‌فرض ----------
    PlaylistRepository &playlistRepo =
        RepositoryManager::instance().playlists();

    Playlist playlist(
        playlistRepo.generateNextId(),
        "Favorites",
        listener.getId()
        );

    playlistRepo.add(playlist);
    // ------------------------------------------

    return true;
}

bool AuthenticationService::login(const QString &userName,
                                  const QString &password)
{
    Artist *artist =
        RepositoryManager::instance().artists().searchByUserName(userName);

    if(artist != nullptr &&
        artist->getPassword() == password)
    {
        currentUser = artist;
        return true;
    }

    Listener *listener =
        RepositoryManager::instance().listeners().searchByUserName(userName);

    if(listener != nullptr &&
        listener->getPassword() == password)
    {
        currentUser = listener;
        return true;
    }

    return false;
}