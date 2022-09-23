#ifndef SHOPLIST_USER_H
#define SHOPLIST_USER_H


#include <string>
#include "ShoppingList.h"

class ShoppingList;

class User {
public:
    explicit User(const std::string &username);

    const std::string &getUsername() const;

    void setUsername(const std::string &username);

private:
    std::string username;
};


#endif //SHOPLIST_USER_H
