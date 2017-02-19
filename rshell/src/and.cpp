#include "and.h"

#include <iostream>
#include <cstdlib>

using namespace std;


bool And::execute() {
    
  Command* command = new Command(this->left);
      if(command->execute()) {
        //cout << " left side of && executed, now executing right "<< endl;
          Command* command2 = new Command(this->right); 
              command2->execute();
      }
      else {
          return false;
      }
    return false;
}