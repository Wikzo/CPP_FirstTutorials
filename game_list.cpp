// Game List app
// Program to make lists of favorite videogames

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> list;
    vector<string>::const_iterator iter;
    cout << "Hello. What do you want to do?\n";
    while (true)
    {          
             cout << "\n\n- View my list - press 1.\n";
             cout << "- Add a game to the list - press 2.\n";
             cout << "- Delete a game from the list - press 3.\n";
    
             cout << "\nType your prefered action: ";
             int choice;
             cin >> choice;
    
             switch (choice)
             {
               case 1:
               cout << "\n\nYour list of games:\n";
               for (iter = list.begin(); iter != list.end(); ++iter)
                   cout << *iter << endl;;
               break;
                
               case 2:
               {
                    cout << "\n\nAdd a game to the list: ";
                    string new_game;
                    cin >> new_game;
                    list.push_back(new_game);
               }
               break;
                              
               case 3:
               cout << "\n\nAre you sure you want to DELTE the last entry? (y/n): ";
               char delete_confirm;
               cin >> delete_confirm;
               if (delete_confirm == 'y')
                  {
                   list.pop_back();
                   cout << "***Last game on the list has been deleted.***\n";   
                   }
                   
               if (delete_confirm == 'n')
                  cout << "Ok, nothing has changed.\n";
               break;   
               
             }
    }
    
    return 0;
}
