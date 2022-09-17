#ifndef SHOPLIST_ITEM_H
#define SHOPLIST_ITEM_H


#include <string>
#include "User.h"

class User;

using namespace std;

//TODO should maybe be a string to support custom categories
enum class Category {
    Dairy,
    Meat,
    Vegetables,
    Fruit,
    Cleaning,
    Electronics,
    Stationery,
    Other
};

class Item {

public:

    Item(const string &n, const string &d, unsigned int q, Category c);

    Item(const string &n, Category c);

    Item(const string &n, const string &d, Category c);

    Item(const string &n, unsigned int q, Category c);

    const string &getName() const;

    void setName(const string &name);

    const string &getNotes() const;

    void setNotes(const string &description);

    unsigned int getQuantity() const;

    void setQuantity(unsigned int quantity);

    Category getCategory() const;

    void setCategory(Category category);

    bool isBought() const;

    void setBought(bool bought);

private:
    string name;
    string notes;
    unsigned int quantity = 1;
    Category category = Category::Other;
    bool bought = false;
};


#endif //SHOPLIST_ITEM_H
