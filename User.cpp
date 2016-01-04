#include "User.h"
#include <QtGlobal>

User::User() {
    qint32 usernumber = qrand() % 10000;
    username = new QString("user");
    username->append(usernumber);
}
