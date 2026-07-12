#include "account.h"

Account::Account()
{

}
Account::Account(int id,
                 QString fullName,
                 QString userName,
                 QString biography,
                 QString password,
                 Role role,
                 QString profilePhoto)
{
    this->id = id;
    this->fullName = fullName;
    this->userName = userName;
    this->biography = biography;
    this->password = password;
    this->role = role;
    this->profilePhoto = profilePhoto;
}
// Getters

int Account::getId() const
{
    return id;
}

QString Account::getFullName() const
{
    return fullName;
}

QString Account::getUserName() const
{
    return userName;
}

QString Account::getBiography() const
{
    return biography;
}

QString Account::getPassword() const
{
    return password;
}

Role Account::getRole() const
{
    return role;
}

QString Account::getProfilePhoto() const
{
    return profilePhoto;
}

// Setters

void Account::setFullName(const QString &fullName)
{
    this->fullName = fullName;
}

void Account::setUserName(const QString &userName)
{
    this->userName = userName;
}

void Account::setBiography(const QString &biography)
{
    this->biography = biography;
}

void Account::setPassword(const QString &password)
{
    this->password = password;
}

void Account::setRole(Role role)
{
    this->role = role;
}

void Account::setProfilePhoto(const QString &profilePhoto)
{
    this->profilePhoto = profilePhoto;
}
