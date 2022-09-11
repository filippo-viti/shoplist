#ifndef SHOPLIST_SHOPPINGLIST_H
#define SHOPLIST_SHOPPINGLIST_H


#include <list>
#include "Item.h"
#include "Subject.h"

using namespace std;

class ShoppingList : public Subject {

public:
    ShoppingList(User *o);

    virtual ~ShoppingList();

    void addItem(Item *item);

    void removeItem(Item *item);

    void checkItem(Item *item);

    unsigned int getBoughtTotal();

    unsigned int getMissingItems() const;

    void setMissingItems(unsigned int missingItems);

    User *getOwner() const;

    void setOwner(User *owner);

    void subscribe(Observer *o) override;

    void unsubscribe(Observer *o) override;

    void notify() const override;

private:
    //TODO should we use vector instead?
    list<Item *> items;
    unsigned int missingItems = 0;
    list<Observer *> observers;
    User *owner;
};


#endif //SHOPLIST_SHOPPINGLIST_H
