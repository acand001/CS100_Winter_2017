#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <cstdlib>

using namespace std;

class Base {
    
    public:

    /* Constructors */
    Base(){};
    
    /* Pure Virtual Functions */
    virtual string load() = 0;
    virtual bool execute () = 0;
    virtual ~Base()  {
        
    }
    
};
#endif