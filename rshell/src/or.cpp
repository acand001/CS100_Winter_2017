#include "or.h"


//Or should execute right side if left fails
bool Or::execute() {
   bool temp = false;
   // cout << left->load();
   // cout << right->load();
   Command *  command = new Command(this->left);
   if(command->execute()) {
      cout << " it succeded"<< endl;
      temp = true;
   }
   else {
      cout<<"left execute failed so run right" << endl;
      Command*  command = new Command(this->right);
      command->execute();
      temp =  false;
   }
   return temp;
}