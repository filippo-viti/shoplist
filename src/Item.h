#ifndef SHOPLIST_ITEM_H
#define SHOPLIST_ITEM_H


#include <string>
#include "User.h"

enum Category {
    Dairy,
    Meat,
    Vegetables,
    Fruit,
    Cleaning,
    Electronics,
    Stationery
};

class Item {

public:
    Item(const std::string &name, const std::string &description, int quantity, Category category, User *addedBy);

    virtual ~Item();

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    int getQuantity() const;

    void setQuantity(int quantity);

    Category getCategory() const;

    void setCategory(Category category);

    const User &getAddedBy() const;

    void setAddedBy(const User &addedBy);

    bool operator==(const Item &rhs) const;

    bool operator!=(const Item &rhs) const;

private:
    std::string name;
    std::string description;
    int quantity;
    Category category;
    User *addedBy;

};


#endif //SHOPLIST_ITEM_H
