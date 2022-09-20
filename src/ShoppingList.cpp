#include <algorithm>
#include "ShoppingList.h"

ShoppingList::ShoppingList(const std::string &name, User *creator) : name(name) {
    collaborators.insert(creator);
}

ShoppingList::ShoppingList() = default;

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

const std::string &ShoppingList::getName() const {
    return name;
}

void ShoppingList::setName(const std::string &name) {
    ShoppingList::name = name;
    notify();
}

const std::list<Item> &ShoppingList::getItems() const {
    return items;
}

int ShoppingList::getTotalBought() const {
    return boughtItemsQuantity;
}

const std::unordered_set<User *> &ShoppingList::getCollaborators() const {
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

void ShoppingList::removeItem(const std::string &name) {
    auto item = getItem(name);
    removeItem(item);
}

void ShoppingList::removeItem(std::list<Item>::iterator &item) {
    if (item != items.end()) {  // erase() has undefined behavior when called on end()
        if (item->isBought()) {
            boughtItemsQuantity--;
        }
        items.erase(item);
        notify();
    }   //TODO maybe throw exception?
}

void ShoppingList::checkItem(const std::string &name) {
    auto item = getItem(name);
    checkItem(item);
}


void ShoppingList::checkItem(std::list<Item>::iterator &item) {
    if (item != items.end()) {
        item->setBought(true);
        boughtItemsQuantity++;
        notify();
    }
}

void ShoppingList::uncheckItem(const std::string &name) {
    auto item = getItem(name);
    uncheckItem(item);
}

void ShoppingList::uncheckItem(std::list<Item>::iterator &item) {
    if (item != items.end()) {
        item->setBought(false);
        boughtItemsQuantity--;
        notify();
    }
}

std::list<Item>::iterator ShoppingList::getItem(const std::string &name) {
    return std::find_if(items.begin(), items.end(),
                        [&name](const Item &i) { return name == i.getName(); });
}

int ShoppingList::getTotalItems() const {
    return int(items.size());
}

void ShoppingList::addCollaborator(User *user) {
    collaborators.insert(user);
    notify();
}
