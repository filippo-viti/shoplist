//
// Created by filip on 17/09/2022.
//

#include <iostream>
#include "MissingItemsBadge.h"

MissingItemsBadge::MissingItemsBadge(const std::shared_ptr<ShoppingList> &subject) : subject(subject) {
    subject->attach(this);
}

MissingItemsBadge::~MissingItemsBadge() {
    subject->detach(this);
}

void MissingItemsBadge::update() {
    int boughtItems = subject->getTotalBought();
    int totalItems = subject->getTotalItems();
    std::cout << boughtItems << "/" << totalItems;
}