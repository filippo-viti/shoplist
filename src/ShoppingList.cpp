#include "ShoppingList.h"

ShoppingList::ShoppingList(const string &n, User *o) : name(n), owner(o) {}

ShoppingList::~ShoppingList() = default;

void ShoppingList::addItem(Item *item) {
    items.push_back(item);
}

void ShoppingList::removeItem(Item *item) {
    items.remove(item);
}

void ShoppingList::checkItem(Item *item) {
    //TODO implement method
}

const string &ShoppingList::getName() const {
    return name;
}

void ShoppingList::setName(const string &name) {
    ShoppingList::name = name;
}


unsigned int ShoppingList::getBoughtTotal() {
    return items.size() - missingItems;
}

unsigned int ShoppingList::getMissingItems() const {
    return missingItems;
}

void ShoppingList::setMissingItems(unsigned int missingItems) {
    ShoppingList::missingItems = missingItems;
}

User *ShoppingList::getOwner() const {
    return owner;
}

void ShoppingList::setOwner(User *owner) {
    ShoppingList::owner = owner;
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