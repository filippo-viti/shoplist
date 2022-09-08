#ifndef SHOPLIST_USER_H
#define SHOPLIST_USER_H


#include <string>
#include "Observer.h"
#include "ShoppingList.h"

//TODO should the view be the observer instead?
class User : public Observer {
public:
    void update() override;

    void attach() override;

    void detach() override;

private:
    //TODO maybe add more informations about the user
    std::string username;
    list<ShoppingList *> subjects;
};


#endif //SHOPLIST_USER_H
