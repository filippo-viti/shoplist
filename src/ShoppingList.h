#ifndef SHOPLIST_SHOPPINGLIST_H
#define SHOPLIST_SHOPPINGLIST_H


#include <list>
#include "Item.h"
#include "Subject.h"

class ShoppingList : public Subject {

public:
    void addItem(Item *item);

    void removeItem(Item *item);

    void subscribe(Observer *o) override;

    void unsubscribe(Observer *o) override;

    void notify() const override;

private:
    std::list<Item *> items;
    std::list<Item *> checkedItems;
    std::list<Observer *> observers;
    User *owner;
};


#endif //SHOPLIST_SHOPPINGLIST_H
