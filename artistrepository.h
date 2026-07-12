#ifndef ARTISTREPOSITORY_H
#define ARTISTREPOSITORY_H

#include "accountrepository.h"
#include "artist.h"

class ArtistRepository:public AccountRepository<Artist>
{
private:
    QList<Artist> artists;
public:
    ArtistRepository();
    void add(const Artist &item) override;
    void remove(int id) override;
    void update(const Artist &item) override;
    Artist* getById(int id) override;
    QList<Artist>getAll()override;

    Artist* searchByUserName(const QString &userName) override;
};

#endif // ARTISTREPOSITORY_H
