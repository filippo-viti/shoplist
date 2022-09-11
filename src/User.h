#ifndef SHOPLIST_USER_H
#define SHOPLIST_USER_H


#include <string>
#include "Observer.h"
#include "ShoppingList.h"

class ShoppingList;

using namespace std;

class User : public Observer {
public:
    User(const string &username);

    const string &getUsername() const;

    void setUsername(const string &username);

    void update() override;

    void attach() override;

    void detach() override;

private:
    //TODO maybe add more informations about the user
    string username;
    list<ShoppingList *> subjects;
};


#endif //SHOPLIST_USER_H
