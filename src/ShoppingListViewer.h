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
    explicit ShoppingListViewer(const shared_ptr<ShoppingList> &subject);

    ~ShoppingListViewer() override = default;

    void update() override;

private:
    shared_ptr<ShoppingList> subject;
};


#endif //SHOPLIST_SHOPPINGLISTVIEWER_H
