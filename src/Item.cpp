
#include "Item.h"

Item::Item(User *ab) : addedBy(ab) {}

Item::Item(const string &n, const string &d, unsigned int q, Category c, User *ab) :
        name(n), description(d), quantity(q), category(c), addedBy(ab) {}

Item::Item(const string &n, Category c, User *ab) : Item(n, "", 1, c, ab) {}

Item::Item(const string &n, const string &d, Category c, User *ab) : Item(n, d, 1, c, ab) {}

Item::Item(const string &n, unsigned int q, Category c, User *ab) : Item(n, "", q, c, ab) {}

Item::~Item() {

}

const string &Item::getName() const {
    return name;
}

void Item::setName(const string &name) {
    Item::name = name;
}

const string &Item::getDescription() const {
    return description;
}

void Item::setDescription(const string &description) {
    Item::description = description;
}

unsigned int Item::getQuantity() const {
    return quantity;
}

void Item::setQuantity(unsigned int quantity) {
    Item::quantity = quantity;
}

Category Item::getCategory() const {
    return category;
}

void Item::setCategory(Category category) {
    Item::category = category;
}

User *Item::getAddedBy() const {
    return addedBy;
}

void Item::setAddedBy(User *addedBy) {
    Item::addedBy = addedBy;
}

bool Item::isBought() const {
    return bought;
}

void Item::setBought(bool bought) {
    Item::bought = bought;
}
