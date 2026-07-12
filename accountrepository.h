#ifndef ACCOUNTREPOSITORY_H
#define ACCOUNTREPOSITORY_H
#include "account.h"
#include "abstractrepository.h"

template<typename T>
class AccountRepository : public AbstractRepository<T>
{
public:
    virtual ~AccountRepository() {}

    virtual Account* searchByUserName(const QString &userName) = 0;
};

#endif // ACCOUNTREPOSITORY_H
