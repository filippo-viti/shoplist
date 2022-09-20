//
// Created by filip on 17/09/2022.
//

#ifndef SHOPLIST_MISSINGITEMSBADGE_H
#define SHOPLIST_MISSINGITEMSBADGE_H


#include <memory>
#include "Observer.h"
#include "ShoppingList.h"

class MissingItemsBadge : public Observer {
public:
    explicit MissingItemsBadge(ShoppingList *subject);

    ~MissingItemsBadge() override;

    void update() override;

private:
    ShoppingList *subject;
};


#endif //SHOPLIST_MISSINGITEMSBADGE_H
