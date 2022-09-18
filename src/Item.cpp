
#include "Item.h"

Item::Item(const string &n, const string &d, unsigned int q, const string &c) :
        name(n), notes(d), quantity(q), category(c) {}

Item::Item(const string &n, const string &c) : Item(n, "", 1, c) {}

Item::Item(const string &n, const string &d, const string &c) : Item(n, d, 1, c) {}

Item::Item(const string &n, unsigned int q, const string &c) : Item(n, "", q, c) {}

const string &Item::getName() const {
    return name;
}

void Item::setName(const string &name) {
    Item::name = name;
}

const string &Item::getNotes() const {
    return notes;
}

void Item::setNotes(const string &description) {
    Item::notes = description;
}

unsigned int Item::getQuantity() const {
    return quantity;
}

void Item::setQuantity(unsigned int quantity) {
    Item::quantity = quantity;
}

string Item::getCategory() const {
    return category;
}

void Item::setCategory(const string &category) {
    Item::category = category;
}

bool Item::isBought() const {
    return bought;
}

void Item::setBought(bool bought) {
    Item::bought = bought;
}

ostream &operator<<(ostream &os, const Item &item) {
    os << "name: " << item.name << " notes: " << item.notes << " quantity: " << item.quantity << " category: "
       << item.category << " bought: " << (item.bought ? "X" : "O");
    return os;
}
