#include "Item.h"

Item::Item(const std::string &name, const std::string &description, int quantity, Category category,
           User *addedBy) : name(name), description(description), quantity(quantity), category(category),
                            addedBy((User *) addedBy) {}
//TODO decide if we need to implement destructor
Item::~Item() {
}

const std::string &Item::getName() const {
    return name;
}

void Item::setName(const std::string &name) {
    Item::name = name;
}

const std::string &Item::getDescription() const {
    return description;
}

void Item::setDescription(const std::string &description) {
    Item::description = description;
}

int Item::getQuantity() const {
    return quantity;
}

void Item::setQuantity(int quantity) {
    Item::quantity = quantity;
}

Category Item::getCategory() const {
    return category;
}

void Item::setCategory(Category category) {
    Item::category = category;
}

const User &Item::getAddedBy() const {
    return addedBy;
}

void Item::setAddedBy(const User &addedBy) {
    Item::addedBy = addedBy;
}

bool Item::operator==(const Item &rhs) const {
    return name == rhs.name;
}

bool Item::operator!=(const Item &rhs) const {
    return !(rhs == *this);
}

bool Item::isBought() const {
    return bought;
}

void Item::setBought(bool bought) {
    Item::bought = bought;
}
