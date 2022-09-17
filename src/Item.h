#ifndef SHOPLIST_ITEM_H
#define SHOPLIST_ITEM_H


#include <string>
#include "User.h"

class User;

using namespace std;

//TODO add more categories
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

    Item(const string &n, const string &d, unsigned int q, Category c, User *ab);

    Item(const string &n, Category c, User *ab);

    Item(const string &n, const string &d, Category c, User *ab);

    Item(const string &n, unsigned int q, Category c, User *ab);

    const string &getName() const;

    void setName(const string &name);

    const string &getDescription() const;

    void setDescription(const string &description);

    unsigned int getQuantity() const;

    void setQuantity(unsigned int quantity);

    Category getCategory() const;

    void setCategory(Category category);

    User *getAddedBy() const;

    void setAddedBy(User *addedBy);

    bool isBought() const;

    void setBought(bool bought);

private:
    string name;
    string description;
    unsigned int quantity = 1;
    Category category = Category::Other;
    User *addedBy;
    bool bought = false;
};


#endif //SHOPLIST_ITEM_H
