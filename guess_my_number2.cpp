// Guess my number 2.0
// The CPU has to guess the human's number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    unsigned short int humanNumber;
    int wrong = 1;
    while (wrong == 1)
    {     
          wrong = 0; 
          cout << "\tPlease enter a number between 1 and 100: ";
          cin >> humanNumber;
    
          if ( (humanNumber <= 0) || (humanNumber >= 100) )
             wrong = 1;
          else
              break;
              
          if (wrong = 1)
             cout << "Error!";
     
    }
    
    srand(time(0));
    
    int cpuTries = 0;
    
    while (true)
    {
        int cpuGuess = rand() % 100 + 1;
        cout << "\n**The CPU guessed: " << cpuGuess << "**" << endl;
        ++cpuTries;
        
        if (cpuGuess > humanNumber)
        cout << "CPU's guess was too high." << endl;
        
        if (cpuGuess < humanNumber)
        cout << "CPU's guess was too low." << endl;
        
        if (cpuGuess == humanNumber)
                     break;
                     
                     continue;
        
    }
    
    cout << "\nThe CPU guessed your number, " << humanNumber << ", using " << cpuTries << " guesses.";
    
    return 0;
    
}
    
    
