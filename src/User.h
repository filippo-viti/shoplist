#ifndef SHOPLIST_USER_H
#define SHOPLIST_USER_H


#include <string>
#include "Observer.h"
#include "ShoppingList.h"

using namespace std;

class User : public Observer {
public:
    User(const string &username);

    virtual ~User();

    void update() override;

    void attach() override;

    void detach() override;

private:
    //TODO maybe add more informations about the user
    string username;
    list<ShoppingList *> subjects;
};


#endif //SHOPLIST_USER_H
