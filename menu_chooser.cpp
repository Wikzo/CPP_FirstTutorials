// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main()
{
    cout << "Choose a difficulty:\n\n";
    cout << "1 - EASY\n2 - NORMAL\n3 - HARD\n\n";
    
    int choice;
    cout << "Choice: ";
    cin >> choice;
    
    switch (choice)
    {
           case 1:
                cout << "You picked EASY";
                break;
           case 2:
                cout << "You picked NORMAL";
                break;
           case 3:
                cout << "You picked HARD";
                break;
           default:
                   cout << "You made an illegal choice...";
    }
    
    return 0;
}
