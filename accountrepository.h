#ifndef ACCOUNTREPOSITORY_H
#define ACCOUNTREPOSITORY_H

#include "abstractrepository.h"
#include <QString>

template<typename T>
class AccountRepository : public AbstractRepository<T>
{
public:
    virtual ~AccountRepository() {}

    virtual T* searchByUserName(const QString &userName) = 0;
};

#endif // ACCOUNTREPOSITORY_H