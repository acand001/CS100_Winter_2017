#ifndef DOUBLE_COMP_H
#define DOUBLE_COMP_H

#include <iostream>
#include <cstdlib>
#include <string>
#include "base.h"
#include "command.h"

using namespace std;

class Or : public Base{
 
 private:
   Base* left; 
   Base* right;  
   string s;
   
 public:
   Or(Base*l, Base*r)  {
       left = l;
       right = r;
   }
   bool execute();
   
   ~Or(){}
   string load(){return s;}
     
};

#endif