//Quiz 5 Work "Shopping List"
//Bowlby, David COSC 1437-58001
//Dr_T, Nov 13, 2019
/*Practice making/using "header file", Pass by &, Vector Sorting*/

#include "Shopping_List.h"

int main() 
{
  vector<string> shoppingList;
  
  cout << "\nPlease Enter the Item/s for Shopping (type end to stop): " << endl;
  cout << "Place ***** at the end of your favorite Item/s so you don't forget them. " << endl;
  
  showshoppingList(shoppingList);
  
  
  return 0;  
}




