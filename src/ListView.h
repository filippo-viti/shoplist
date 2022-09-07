#ifndef SHOPLIST_LISTVIEW_H
#define SHOPLIST_LISTVIEW_H

#include <list>
#include "User.h"
#include "ShoppingList.h"

using namespace std;

//TODO should this be an Observer?
class ListView {
    //TODO define and implement methods
public:
    explicit ListView(User *user);

    void draw();

    void switchUser(User *newUser);


private:
    User *user;
};


#endif //SHOPLIST_LISTVIEW_H
