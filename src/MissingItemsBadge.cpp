//
// Created by filip on 17/09/2022.
//

#include <iostream>
#include "MissingItemsBadge.h"

MissingItemsBadge::MissingItemsBadge(const shared_ptr<ShoppingList> &subject) : subject(subject) {}

MissingItemsBadge::~MissingItemsBadge() {
    subject->detach(this);
}

void MissingItemsBadge::update() {
    int missingItems = subject->getMissingItems();
    int totalItems = subject->getTotalItems();
    cout << totalItems - missingItems << "/" << totalItems;
}