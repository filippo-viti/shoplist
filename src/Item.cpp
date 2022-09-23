
#include "Item.h"

Item::Item(const std::string &name, const std::string &category, unsigned int quantity, const std::string &notes) :
        name(name), category(category), quantity(quantity), notes(notes) {}

const std::string &Item::getName() const {
    return name;
}

void Item::setName(const std::string &name) {
    Item::name = name;
}

const std::string &Item::getNotes() const {
    return notes;
}

void Item::setNotes(const std::string &notes) {
    Item::notes = notes;
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
       << item.category << '|' << (item.bought ? "X" : "O") << '|';
    return os;
}
