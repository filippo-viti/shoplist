//
// Created by filip on 17/09/2022.
//

#ifndef SHOPLIST_SHOPPINGLISTVIEWER_H
#define SHOPLIST_SHOPPINGLISTVIEWER_H


#include <memory>
#include "Observer.h"
#include "ShoppingList.h"

class ShoppingListViewer : public Observer {
public:
    explicit ShoppingListViewer(const std::shared_ptr<ShoppingList> &subject);

    ~ShoppingListViewer() override;

    void update() override;

private:
    std::shared_ptr<ShoppingList> subject;

    void display(const std::list<Item> &items) const;
};


#endif //SHOPLIST_SHOPPINGLISTVIEWER_H
