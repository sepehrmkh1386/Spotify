#ifndef LISTENERREPOSITORY_H
#define LISTENERREPOSITORY_H

#include "accountrepository.h"
#include "listener.h"

class ListenerRepository:public
AccountRepository<Listener>
{
public:
    ListenerRepository();

    void add(const Listener &item) override;
    void remove(int id )override;
    void update(const Listener &item)override;
    Listener* getById(int id)override;
    QList<Listener> getAll()override;
    Listener* searchByUserName(const QString &userName) override;
    void load() override;
    void save()override;
};

#endif // LISTENERREPOSITORY_H
