#ifndef SHOPLIST_SHOPPINGLIST_H
#define SHOPLIST_SHOPPINGLIST_H


#include <list>
#include "Item.h"
#include "Subject.h"

class User;

class Item;

using namespace std;

class ShoppingList : public Subject {

public:
    ShoppingList(const string &n, User *o);

    virtual ~ShoppingList();

    const list<Item *> &getItems() const;

    void addItem(Item *item);

    void removeItem(Item *item);

    void checkItem(Item *item);

    const string &getName() const;

    void setName(const string &name);

    int getBoughtTotal();

    int getMissingItems() const;

    int getTotalItems() const;

    void setMissingItems(unsigned int missingItems);

    User *getOwner() const;

    void setOwner(User *owner);

    void attach(Observer *o) override;

    void detach(Observer *o) override;

    void notify() const override;

private:
    //TODO should we use vector instead?
    string name;
    list<Item *> items;
    int missingItems = 0;
    list<Observer *> observers;
    User *owner;
};


#endif //SHOPLIST_SHOPPINGLIST_H
