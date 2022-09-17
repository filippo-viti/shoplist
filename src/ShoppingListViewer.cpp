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
    for (auto &item: items) {
        cout << item.getName();    //TODO print it prettier
    }
}