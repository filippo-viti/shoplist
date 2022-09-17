#ifndef SHOPLIST_USER_H
#define SHOPLIST_USER_H


#include <string>
#include "ShoppingList.h"

class ShoppingList;

using namespace std;

class User {
public:
    explicit User(const string &username);

    ~User();

    const string &getUsername() const;

    void setUsername(const string &username);

private:
    //TODO maybe add more information about the user
    string username;
};


#endif //SHOPLIST_USER_H
