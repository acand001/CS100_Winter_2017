#ifndef SEMICOLON_H
#define SEMICOLON_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

#include "base.h"
#include "command.h"
using namespace std;

class Semicolon{
       
    private: 
    Base* single;
    string str;
    
   public:
    Semicolon(Base* o){
        single = o;
    }
  
    ~Semicolon(){}
    
    bool execute() {
        Command* command = new Command (single);
        //cout <<"printing string to execute" << endl;
       // cout << single->load() << endl;
        //cout <<"executing  single command or after semicolon "<< endl;
        return command->execute();
        //return true;
    }
    string load(){
        //return(/*Something or Nothing Here*/);
        return  str;
    }  
      

};
#endif