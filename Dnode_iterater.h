/*
    Name: Ryan Kilkenney
    Date: 3/28/2020 
    Purpose: Its the .h file for the iterator. It creates an iterator that can travese through a list 

*/
#include <iterator>
#include <iostream>
#include "Dnode.h"

template <class T> 
class dlist;
template <class T>
class Dnode_iterator {

    public:
    friend class dlist<T>;
    Dnode_iterator(Dnode<T>* init = NULL) {
        current = init;
    }

    bool operator !=(const Dnode_iterator &other) {
        return current != other.current;
    }

    bool operator ==(const Dnode_iterator &other) {
        return current == other.current;
    }

    T operator *() {
        return current->data();
    }

    Dnode_iterator operator ++() {
        current = current->next();
        return *this;
    }

    Dnode_iterator operator++(int i) {
        Dnode_iterator original(current);
        current = current->next();
        return original;
    }

    Dnode_iterator operator --() {
        current = current->previous();
        return *this;
    }

    Dnode_iterator operator--(int i) {
        Dnode_iterator original(current);
        current = current->previous();
        return original;
    }

    private:
    Dnode<T> *current;

};
