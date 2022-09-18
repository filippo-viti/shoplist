
#include "Item.h"

Item::Item(const std::string &n, const std::string &d, unsigned int q, const std::string &c) :
        name(n), notes(d), quantity(q), category(c) {}

Item::Item(const std::string &n, const std::string &c) : Item(n, "", 1, c) {}

Item::Item(const std::string &n, const std::string &d, const std::string &c) : Item(n, d, 1, c) {}

Item::Item(const std::string &n, unsigned int q, const std::string &c) : Item(n, "", q, c) {}

const std::string &Item::getName() const {
    return name;
}

void Item::setName(const std::string &name) {
    Item::name = name;
}

const std::string &Item::getNotes() const {
    return notes;
}

void Item::setNotes(const std::string &description) {
    Item::notes = description;
}

unsigned int Item::getQuantity() const {
    return quantity;
}

void Item::setQuantity(unsigned int quantity) {
    Item::quantity = quantity;
}

std::string Item::getCategory() const {
    return category;
}

void Item::setCategory(const std::string &category) {
    Item::category = category;
}

bool Item::isBought() const {
    return bought;
}

void Item::setBought(bool bought) {
    Item::bought = bought;
}

std::ostream &operator<<(std::ostream &os, const Item &item) {
    os << "name: " << item.name << " notes: " << item.notes << " quantity: " << item.quantity << " category: "
       << item.category << " bought: " << (item.bought ? "X" : "O");
    return os;
}
