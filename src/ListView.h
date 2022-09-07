#ifndef SHOPLIST_LISTVIEW_H
#define SHOPLIST_LISTVIEW_H

#include <list>
#include "User.h"
#include "ShoppingList.h"

using namespace std;

class ListView {
public:
    explicit ListView(User *user);

    void draw();

    void switchUser(User *newUser);


private:
    User *user;
};


#endif //SHOPLIST_LISTVIEW_H
