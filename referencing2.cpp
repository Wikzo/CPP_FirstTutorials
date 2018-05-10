// Swap
// Demonstrates passing references to alter argument variables

#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
    int myScore = 150;
    int yourScore = 1000;
    cout << "Original values\n";
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
    
    cout << "Calling badSwap()\n";
    badSwap(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
    
    cout << "Calling goodSwap()\n";
    goodSwap(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
    
    return 0;
    
}

void badSwap(int x, int y)
{
     int temp = x;
     x = y;
     y = temp;
}
// virker ikke, fordi x og y holder op med at eksistere i scope, når det er kørt færdigt

void goodSwap(int& x, int& y)
{
     int temp = x;
     x = y;
     y = temp;
}
// virker, fordi x og y referer til myScore og yourScore og ikke er noget i sig selv
    
