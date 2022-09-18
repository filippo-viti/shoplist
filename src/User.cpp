#include "User.h"

User::User(const std::string &username) : username(username) {}

const std::string &User::getUsername() const {
    return username;
}

void User::setUsername(const std::string &username) {
    User::username = username;
}
