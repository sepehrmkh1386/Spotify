#ifndef AUTHENTICATIONSERVICE_H
#define AUTHENTICATIONSERVICE_H

#include <QString>
#include "account.h"

class AuthenticationService
{
private:
    Account* currentUser;

public:
    AuthenticationService();
    bool registerArtist(const QString &fullName,const QString &userName,const QString &password);
    bool registerListener(const QString &fullName,const QString &userName,const QString &password);
    bool login(const QString &userName,const QString &password);

    void logout();

    Account* getCurrentUser() const;
};

#endif // AUTHENTICATIONSERVICE_H
