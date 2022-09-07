#include "ShoppingList.h"

void ShoppingList::subscribe(Observer *o) {
    observers.push_back(o);
}

void ShoppingList::unsubscribe(Observer *o) {
    observers.remove(o);
}

//TODO decide how updating should work
void ShoppingList::notify() const {
    for (Observer *o: observers) {
        o->update();
    }
}

