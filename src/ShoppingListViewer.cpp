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
    auto items = subject->getItems();
    display(items);
}

void ShoppingListViewer::display(const list<Item> &items) const {
    cout << subject->getName() << ' ' << subject->getTotalBought() << '/' << subject->getTotalItems() << endl;
    cout << "Users: ";
    for (const auto &user: subject->getCollaborators()) {
        cout << user->getUsername() << ' ';
    }
    cout << endl;
    for (auto &item: items) {
        cout << '\t' << item << endl;
    }
}