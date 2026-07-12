#ifndef LISTENER_H
#define LISTENER_H

#include "account.h"

class Listener : public Account
{
public:
    Listener();

    Listener(int id,
             QString fullName,
             QString userName,
             QString biography,
             QString password,
             QString profilePhoto);
};

#endif // LISTENER_H
