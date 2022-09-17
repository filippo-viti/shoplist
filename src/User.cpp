#include "User.h"

User::User(const string &username) : username(username) {}

const string &User::getUsername() const {
    return username;
}

void User::setUsername(const string &username) {
    User::username = username;
}
