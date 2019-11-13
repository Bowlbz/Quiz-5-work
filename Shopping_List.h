#include <iostream>
#include <fstream>//print to text library
#include <vector>//use vectors library
#include <string>
#include <algorithm>//to use "sort" *****

using namespace std;

//Function Prototypes ***********************
void printshoppingList(vector<string> &);
void showshoppingList(vector<string> &);


//Function Definitions ***********************
void printshoppingList(vector<string> &sL)
{
  int t = 1;
  ofstream list;
  list.open("Shopping_List.txt", ios::out);
  
  list <<"\n*********SHOPPING LIST********" <<endl;
  for(string x : sL)
  {
    list << t++ << ".) " << x << endl;
  }
  
  list << "\nHave a Nice Day!! " << endl;
  list.close();
}

void showshoppingList(vector<string> &sL)
{
   int i = 0;
   string inputItems = " ";
   
   for(int i = 0; inputItems != "end"; i++)
  {
    cin >> inputItems;
    
    if(inputItems != "end")
    {
      sL.push_back(inputItems);
    }

    cout << "Item: " << sL.size() << endl;
    
    
  }
  sort(sL.begin(), sL.end());
  reverse(sL.begin(), sL.end());
  
  cout <<"\n*********SHOPPING LIST********" <<endl;
  for(string x : sL)
  {
    int t = 1;
    cout << t++ << ".) " << x << endl;
  }
  
  printshoppingList(sL);
}