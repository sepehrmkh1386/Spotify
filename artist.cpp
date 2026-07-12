#include "artist.h"

Artist::Artist(int id,
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
              Role::Artist,
              profilePhoto)
{

}
