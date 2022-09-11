#include "User.h"

User::User(const string &username) : username(username) {}

User::~User() {
    //TODO unsubscribe from every subject
}

const string &User::getUsername() const {
    return username;
}

void User::setUsername(const string &username) {
    User::username = username;
}

void User::update() {

}

void User::attach() {

}

void User::detach() {

}
