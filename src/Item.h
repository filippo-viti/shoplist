#ifndef SHOPLIST_ITEM_H
#define SHOPLIST_ITEM_H


#include <string>
#include <ostream>
#include "User.h"

class User;

using namespace std;


class Item {

public:

    Item(const string &n, const string &d, unsigned int q, const string &c);

    Item(const string &n, const string &c);

    Item(const string &n, const string &d, const string &c);

    Item(const string &n, unsigned int q, const string &c);

    const string &getName() const;

    void setName(const string &name);

    const string &getNotes() const;

    void setNotes(const string &description);

    unsigned int getQuantity() const;

    void setQuantity(unsigned int quantity);

    string getCategory() const;

    void setCategory(const string &category);

    bool isBought() const;

    void setBought(bool bought);

    friend ostream &operator<<(ostream &os, const Item &item);

private:
    string name;
    string notes;
    unsigned int quantity = 1;
    string category = "";   //we use string instead of enum to support custom categories
    bool bought = false;
};


#endif //SHOPLIST_ITEM_H
