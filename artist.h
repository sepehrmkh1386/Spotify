#ifndef ARTIST_H
#define ARTIST_H

#include "account.h"

class Artist : public Account
{
public:
    Artist();
    Artist(int id,
           QString fullName,
           QString userName,
           QString biography,
           QString password,
           QString profilePhoto);
};

#endif // ARTIST_H
