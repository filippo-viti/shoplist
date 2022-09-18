#ifndef SHOPLIST_SHOPPINGLIST_H
#define SHOPLIST_SHOPPINGLIST_H


#include <list>
#include <unordered_set>
#include <memory>
#include "Item.h"
#include "Subject.h"
#include "User.h"

class Item;

class User;

using namespace std;

class ShoppingList : public Subject {

public:
    ShoppingList(const string &name, const User &creator);

    void attach(Observer *o) override;

    void detach(Observer *o) override;

    void notify() const override;

    const string &getName() const;

    void setName(const string &name);

    const list <Item> &getItems() const;

    int getBoughtItemsQuantity() const;

    const unordered_set<shared_ptr<User>> &getCollaborators() const;

    void addItem(const Item &newItem);

    void removeItem(const string &name);

    void removeItem(list<Item>::iterator &item);

    void checkItem(const string &name);

    void checkItem(list<Item>::iterator &item);

    void uncheckItem(const string &name);

    void uncheckItem(list<Item>::iterator &item);

    list<Item>::iterator getItem(const string &name);

    int getTotalItems() const;

    void addCollaborator(const User &user);

private:
    string name;
    list <Item> items;
    int boughtItemsQuantity = 0;
    list<Observer *> observers;
    unordered_set<shared_ptr<User>> collaborators;
};


#endif //SHOPLIST_SHOPPINGLIST_H
