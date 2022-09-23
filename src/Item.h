#ifndef SHOPLIST_ITEM_H
#define SHOPLIST_ITEM_H


#include <string>
#include <ostream>
#include "User.h"

class User;

class Item {

public:

    explicit Item(const std::string &name, const std::string &category = "", unsigned int quantity = 1,
                  const std::string &notes = "");

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getNotes() const;

    void setNotes(const std::string &notes);

    unsigned int getQuantity() const;

    void setQuantity(unsigned int quantity);

    std::string getCategory() const;

    void setCategory(const std::string &category);

    bool isBought() const;

    void setBought(bool bought);

    friend std::ostream &operator<<(std::ostream &os, const Item &item);

private:
    std::string name;
    std::string notes;
    unsigned int quantity;
    std::string category;   //we use string instead of enum to support custom categories
    bool bought = false;
};


#endif //SHOPLIST_ITEM_H
