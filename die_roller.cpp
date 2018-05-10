// Die Roller
// Demonstrates generation random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char again = 'y';
    
    while (again == 'y')
    {
            srand(time(0)); // seed random number generator based on current time
            int randomNumber = rand();  // generate random number
    
            int die = (randomNumber % 6) + 1;  // get a number between 1 and 6
            cout << "\n**You rolled a " << die << "**" << endl;
            cout << "\nTry again? (y/n): ";
            cin >> again;
    }
    
    cout << "\nOk, bye for now.";
    
    return 0;
    
}
