#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
    //set-up
    vector<string> list; 
    vector<string>::iterator iter;
    vector<string>::iterator beginiterator;
    vector<string>::iterator beginiterator1;
    vector<string>::iterator beginiterator2;
    vector<string>::iterator beginiterator3;
    vector<string>::iterator enditerator;
    string playernumber;
    string title;
    string answer;
    
    //list of games to iterate through
    list.push_back("1");
    list.push_back("2");
    list.push_back("3");
    list.push_back("4");
    list.push_back("5");
    
    //welcome and instructions
    cout << "Welcome to the top 5 games list program\n\n";
    cout << "To place games on the list, start by entering a number from the\n";
    cout << "list below to place the game in:\n\n"; 
    
     //iterates through the list and displays it
     for (iter = list.begin(); iter != list.end(); ++iter)
        cout << *iter << endl;
    
    //loop that lets the player put games on the list and go back to do it again
    do 
    {
        
    //finds the player's number in the list
    cout<< "\n\nEnter the number here: ";
    cin >> playernumber;
    iter = find(list.begin(), list.end(), playernumber);
    
    //only if the number can be found, the player can proceed
    if (iter != list.end())
    cout << "\n\nNow, enter the title of the game which you wish to place here:\n";
      cin >> title;
      
    //marks the positions in the list through iterators 
    beginiterator = list.begin();
    beginiterator1 = list.begin() +1;
    beginiterator2 = list.begin() +2;
    beginiterator3 = list.begin() +3;
    enditerator = list.end();
  
    //assigns a title to the number the player wishes to place through subscripting operators
    if (playernumber == "1")
       *beginiterator = "1 - " + title;
      
    if (playernumber == "2")
      *beginiterator1 = "2 - " + title;
      
    if (playernumber == "3")
      *beginiterator2 = "3 - " + title;
      
    if (playernumber == "4")
      *beginiterator3 = "4 - " + title;
      
    if (playernumber == "5")
      *enditerator = "5 - " + title;
      
    //iterates through and thereby displays the list again
    for (iter = list.begin(); iter != list.end(); ++iter)
        cout << *iter << endl;
        
    //restarts the loop if the player wants to add another game on the list and exits the loop if the player doesn't
    cout <<"\n\nWould you like to add another game to the list (yes/no)\n\n ";
       cin >> answer;
    
    if (answer == "yes")
       continue;
    
    if (answer == "no")
       cout << "\nHave a nice day";
       break;
       
} while (answer == "yes");
    getch();
    return 0;
}
