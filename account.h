#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

enum class Role
{
    Artist,
    Listener
};
class Account
{
private:
    int id;
    QString fullName;
    QString userName;
    QString biography;
    QString password;
    Role role;
    QString profilePhoto;

public:
    Account();
    Account(int id,
            QString fullName,
            QString userName,
            QString biography,
            QString password,
            Role role,
            QString profilePhoto);
    // Getters
    int getId() const;
    QString getFullName() const;
    QString getUserName() const;
    QString getBiography() const;
    QString getPassword() const;
    Role getRole() const;
    QString getProfilePhoto() const;

    // Setters
    void setFullName(const QString &fullName);
    void setUserName(const QString &userName);
    void setBiography(const QString &biography);
    void setPassword(const QString &password);
    void setRole(Role role);
    void setProfilePhoto(const QString &profilePhoto);
};

#endif // ACCOUNT_H
