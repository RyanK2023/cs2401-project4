/*
    Name: Ryan Kilkenney
    Date: 3/28/2020 
    Purpose: Its the .h file for Dnode. It creates the nodes used for the dlist class.

*/

#include <cstdlib>
#include <iterator>
#include <iostream>

template <class T>
class Dnode {

    public:
   
        Dnode(const T& d = T(), Dnode* p = NULL, Dnode* n = NULL) {
            datafield = d; previousptr = p; nextptr = n;
        }

    T& data() { return datafield; }
    Dnode *previous() { return previousptr; }
	Dnode *next()  { return nextptr; }
    
    void set_data(const T& new_data) { datafield= new_data; }
    void set_previous(Dnode * p){previousptr = p;}
	void set_next(Dnode *n) {nextptr = n;}

    const T& data() const { return datafield; }
    const Dnode *previous() const { return previousptr; }
	const Dnode *next() const { return nextptr; }
    
    private:
        T datafield;
        Dnode *nextptr;
        Dnode *previousptr;

};