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
    explicit MissingItemsBadge(const shared_ptr<ShoppingList> &subject);

    ~MissingItemsBadge() override = default;

    void update() override;

private:
    shared_ptr<ShoppingList> subject;
};


#endif //SHOPLIST_MISSINGITEMSBADGE_H
