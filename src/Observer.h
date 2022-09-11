#ifndef SHOPLIST_OBSERVER_H
#define SHOPLIST_OBSERVER_H


class Observer {
public:
    virtual ~Observer() = default;

    virtual void update() = 0;

    virtual void attach() = 0;

    virtual void detach() = 0;
};


#endif //SHOPLIST_OBSERVER_H
