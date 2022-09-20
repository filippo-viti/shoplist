#include <iostream>
#include "src/User.h"
#include "src/ShoppingListViewer.h"
#include "src/MissingItemsBadge.h"

int main() {
    ShoppingList shoppingList("Shopping List", new User("Giovanni Storti"));

    ShoppingListViewer listViewer(&shoppingList);
    MissingItemsBadge missingItemsBadge(&shoppingList);

    Item item1("milk", "dairy");
    shoppingList.addItem(item1);
    shoppingList.checkItem("milk");
    shoppingList.uncheckItem("milk");
    shoppingList.removeItem("milk");
}
