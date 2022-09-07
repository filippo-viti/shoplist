#ifndef SHOPLIST_USER_H
#define SHOPLIST_USER_H


#include <string>
#include "Observer.h"
#include "ShoppingList.h"

class User : public Observer {
public:
    void update() override;

    void attach() override;

    void detach() override;

private:
    std::string username;
    list<ShoppingList *> subjects;
};


#endif //SHOPLIST_USER_H
