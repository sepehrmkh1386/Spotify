#include "listenerrepository.h"
#include <QFile>
#include <QTextStream>
#include<QStringList>

ListenerRepository::ListenerRepository()
{
}

void ListenerRepository::add(const Listener &item)
{
    data.append(item);
    save();
}

void ListenerRepository::remove(int id)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getId() == id)
        {
            data.removeAt(i);
            return;
        }
    }
}

void ListenerRepository::update(const Listener &item)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getId() == item.getId())
        {
            data[i] = item;
            return;
        }
    }
}
int ListenerRepository::generateNextId()
{
    if (data.isEmpty())
        return 1;

    int maxId = data[0].getId();

    for (int i = 1; i < data.size(); i++)
    {
        if (data[i].getId() > maxId)
            maxId = data[i].getId();
    }

    return maxId + 1;
}
Listener* ListenerRepository::getById(int id)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getId() == id)
            return &data[i];
    }

    return nullptr;
}

QList<Listener> ListenerRepository::getAll()
{
    return data;
}

Listener* ListenerRepository::searchByUserName(const QString &userName)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].getUserName() == userName)
            return &data[i];
    }

    return nullptr;
}

void ListenerRepository::load()
{
    data.clear();

    QFile file("Data/listener.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    while (!in.atEnd())
    {
        QString line = in.readLine();

        if (line.isEmpty())
            continue;

        QStringList parts = line.split('|');

        if (parts.size() != 6)
            continue;

        Listener listener(
            parts[0].toInt(),
            parts[1],
            parts[2],
            parts[3],
            parts[4],
            parts[5]
            );

        data.append(listener);
    }

    file.close();
}
void ListenerRepository::save()
{
    QFile file("Data/artists.txt");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for (int i=0;i<data.size();++i)
    {
        const Listener &listener =data.at(i);
        out << listener.getId() << "|"
            << listener.getFullName() << "|"
            << listener.getUserName() << "|"
            << listener.getBiography() << "|"
            << listener.getPassword() << "|"
            << listener.getProfilePhoto()
            << "\n";
    }

    file.close();
}