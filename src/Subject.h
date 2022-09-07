#ifndef SHOPLIST_SUBJECT_H
#define SHOPLIST_SUBJECT_H


#include "Observer.h"

class Subject {
protected:
    virtual ~Subject() = default;

public:
    virtual void subscribe(Observer *o) = 0;

    virtual void unsubscribe(Observer *o) = 0;

    virtual void notify() const = 0;
};


#endif //SHOPLIST_SUBJECT_H
