// Referencing
// Demonstrates using referencces

#include <iostream>

using namespace std;

int main()
{
    int myScore = 1000;
    int& mikesScore = myScore; // create a reference
    // & = reference operator symbol
    // mikesScore har ingen int værdi, men referer myScore
    // trick: brug et r for at vise, at den referer til noget andet
    // fx rmikesScore eller rScore
    // reference er ligesom et kælenavn til en person
    
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    
    cout << "Adding 500 to myScore\n";
    myScore += 500;
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    
    cout << "Adding 500 to mikesScore\n";
    mikesScore += 500;
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    
    return 0;
    
}
