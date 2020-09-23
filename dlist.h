/*
    Name: Ryan Kilkenney
    Date: 3/28/2020 
    Purpose: Its the .h file for dlist. It takes the nodes from Dlist and makes a list. It also takes has several functions to make the iterator move 

*/
#include <cstdlib>
//#include <iterator>
#include <iostream>
//#include "Dnode.h"
#include "Dnode_iterater.h"

template <class T>
class dlist {
    public:
    typedef Dnode_iterator<T> iterator;
    dlist() {
        head = tail = NULL;
        s = 0;
    }

    void front_insert(T item);
    void rear_insert(T item);
    void front_remove();
    void rear_remove();
    void show();
    void reverse_show();

    ~dlist();
    dlist(const dlist& other);
    dlist& operator =(const dlist& other);

    iterator begin() { 
        return iterator(head);
    }

    iterator end() {
        return iterator(NULL);
    }

    iterator r_begin() { 
        return iterator(tail);
    }

    iterator r_end() {
        return iterator(head->previous());
    }

    void insert_before(iterator spot, T item);
    void insert_after(iterator spot, T item);

    void remove(iterator spot);

    int size() {
        return s;
    }

    private:
        Dnode<T> *head;
        Dnode<T> *tail;
        int s;
}; 

#include "dlist.template"