#ifndef USER_H
#define USER_H

#include <QString>

class User {
    QString* username;
    unsigned int color[3];
public:
    User();

    QString* getUsername() { return username; }
};

#endif // USER_H
