// Exciting game - play again
// Demonstrates while loops

#include <iostream>
using namespace std;

int main()
{
    char again = 'y';
    while (again == 'y')
    {
          cout << "\nYou just played the most awesome game in the world.";
          cout << "\nTry again? (y/n): ";
          cin >> again;
    }
    
    cout << "\nOkay, bye for now.";
    
    return 0;
}
