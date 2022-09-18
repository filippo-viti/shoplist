#include <algorithm>
#include "ShoppingList.h"

ShoppingList::ShoppingList(const string &name, const User &creator) : name(name) {
    collaborators.insert(make_shared<User>(creator));
}

void ShoppingList::attach(Observer *o) {
    observers.push_back(o);
}

void ShoppingList::detach(Observer *o) {
    observers.remove(o);
}

void ShoppingList::notify() const {
    for (auto o: observers) {
        o->update();
    }
}

const string &ShoppingList::getName() const {
    return name;
}

void ShoppingList::setName(const string &name) {
    ShoppingList::name = name;
}

const list<Item> &ShoppingList::getItems() const {
    return items;
}

int ShoppingList::getTotalBought() const {
    return boughtItemsQuantity;
}

const unordered_set<shared_ptr<User>> &ShoppingList::getCollaborators() const {
    return collaborators;
}

void ShoppingList::addItem(const Item &newItem) {
    auto itemInList = getItem(newItem.getName());
    if (itemInList == items.end()) {
        items.push_back(newItem);
    } else {
        itemInList->setQuantity(itemInList->getQuantity() + newItem.getQuantity());
    }
    notify();
}

void ShoppingList::removeItem(const string &name) {
    auto item = getItem(name);
    removeItem(item);
}

void ShoppingList::removeItem(list<Item>::iterator &item) {
    if (item != items.end()) {  // erase() has undefined behavior when called on end()
        if (item->isBought()) {
            boughtItemsQuantity--;
        }
        items.erase(item);
    }   //TODO maybe throw exception?
}

void ShoppingList::checkItem(const string &name) {
    auto item = getItem(name);
    checkItem(item);
}


void ShoppingList::checkItem(list<Item>::iterator &item) {
    if (item != items.end()) {
        item->setBought(true);
        boughtItemsQuantity++;
    }
}

void ShoppingList::uncheckItem(const string &name) {
    auto item = getItem(name);
    uncheckItem(item);
}

void ShoppingList::uncheckItem(list<Item>::iterator &item) {
    if (item != items.end()) {
        item->setBought(false);
        boughtItemsQuantity--;
    }
}

list<Item>::iterator ShoppingList::getItem(const string &name) {
    return find_if(items.begin(), items.end(), [name](const Item &i) { return name == i.getName(); });
}

int ShoppingList::getTotalItems() const {
    return int(items.size());
}

void ShoppingList::addCollaborator(const User &user) {
    collaborators.insert(make_shared<User>(user));
}
