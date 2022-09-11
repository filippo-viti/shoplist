#ifndef SHOPLIST_SHOPPINGLIST_H
#define SHOPLIST_SHOPPINGLIST_H


#include <list>
#include "Item.h"
#include "Subject.h"

using namespace std;

class ShoppingList : public Subject {

public:
    //TODO implement methods
    ShoppingList();

    virtual ~ShoppingList();

    void addItem(Item *item);

    void removeItem(Item *item);

    void checkItem(Item *item);

    void subscribe(Observer *o) override;

    void unsubscribe(Observer *o) override;

    void notify() const override;

private:
    list<Item *> items;
    int missingItems;
    list<Observer *> observers;
    User *owner;
};


#endif //SHOPLIST_SHOPPINGLIST_H
