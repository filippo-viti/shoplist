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

class ShoppingList : public Subject {

public:
    ShoppingList();

    ShoppingList(const std::string &name, User *creator);

    void attach(Observer *o) override;

    void detach(Observer *o) override;

    void notify() const override;

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::list<Item> &getItems() const;

    int getTotalBought() const;

    const std::unordered_set<User *> &getCollaborators() const;

    void addItem(const Item &newItem);

    void removeItem(const std::string &name);

    void removeItem(std::list<Item>::iterator &item);

    void checkItem(const std::string &name);

    void checkItem(std::list<Item>::iterator &item);

    void uncheckItem(const std::string &name);

    void uncheckItem(std::list<Item>::iterator &item);

    std::list<Item>::iterator getItem(const std::string &name);

    int getTotalItems() const;

    void addCollaborator(User *user);

private:
    std::string name;
    std::list<Item> items;
    int totalBought = 0;
    std::list<Observer *> observers;
    std::unordered_set<User *> collaborators;
};


#endif //SHOPLIST_SHOPPINGLIST_H
