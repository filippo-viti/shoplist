//
// Created by filip on 17/09/2022.
//

#include <iostream>
#include "ShoppingListViewer.h"

ShoppingListViewer::ShoppingListViewer(const shared_ptr<ShoppingList> &subject) : subject(subject) {
    subject->attach(this);
}

ShoppingListViewer::~ShoppingListViewer() {
    subject->detach(this);
}

void ShoppingListViewer::update() {
    //TODO avoid getting the entire list (maybe create a list of item observers)
    auto items = subject->getItems();
    display(items);
}

void ShoppingListViewer::display(const list<Item> &items) const {
    cout << subject->getName() << ' ' << subject->getTotalBought() << '/' << subject->getTotalItems() << endl;
    for (auto &item: items) {
        cout << '\t' << item << endl;
    }
}