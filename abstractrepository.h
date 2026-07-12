#ifndef ABSTRACTREPOSITORY_H
#define ABSTRACTREPOSITORY_H

#include<QList>

template<typename T>
class AbstractRepository
{
protected:
    QList<T> data;
public:
    virtual ~AbstractRepository(){}

    virtual void add(const T &item) = 0;
    virtual void remove(int id) = 0;
    virtual void update(const T &item) =0;
    virtual T* getById(int id) = 0;
    virtual QList<T> getAll() = 0;

    virtual void load()=0;
    virtual void save()=0;
};

#endif // ABSTRACTREPOSITORY_H
