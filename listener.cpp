#include "listener.h"
#include "repositorymanager.h"
Listener::Listener() {

}

Listener::Listener(int id,
                   QString fullName,
                   QString userName,
                   QString biography,
                   QString password,
                   QString profilePhoto)
    :Account(id,
               fullName,
               userName,
               biography,
               password,
               Role::Listener,
               profilePhoto)
{

}
