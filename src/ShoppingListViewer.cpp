//
// Created by filip on 17/09/2022.
//

#include <iostream>
#include "ShoppingListViewer.h"

ShoppingListViewer::ShoppingListViewer(const std::shared_ptr<ShoppingList> &subject) : subject(subject) {
    subject->attach(this);
}

ShoppingListViewer::~ShoppingListViewer() {
    subject->detach(this);
}

void ShoppingListViewer::update() {
    auto items = subject->getItems();
    display(items);
}

void ShoppingListViewer::display(const std::list<Item> &items) const {
    std::cout << subject->getName() << ' ' << subject->getTotalBought() << '/' << subject->getTotalItems() << std::endl;
    std::cout << "Users: ";
    for (const auto &user: subject->getCollaborators()) {
        std::cout << user->getUsername() << ' ';
    }
    std::cout << std::endl;
    for (auto &item: items) {
        std::cout << '\t' << item << std::endl;
    }
}