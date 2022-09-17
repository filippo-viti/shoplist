#ifndef SHOPLIST_SUBJECT_H
#define SHOPLIST_SUBJECT_H


#include "Observer.h"

class Subject {
public:
    virtual ~Subject() = default;

    virtual void attach(Observer *o) = 0;

    virtual void detach(Observer *o) = 0;

    virtual void notify() const = 0;
};


#endif //SHOPLIST_SUBJECT_H
