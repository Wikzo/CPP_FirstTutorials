/* Game Stats
Demonstrates declaring and initializing variables*/

#include <iostream>
using namespace std;

int main()
{
    int score; // int = heltal
    double distance; // double = dobbelt kommatal (float = enkelt kommatal)
    char playAgain; // char = enkelt tegn
    bool shieldsUp; // bool = true eller false
    
    short lives, aliensKilled; 
    /* Her bliver to variabler declared samtidig: lives og aliensKilled
    Short = reducerer det totale antal v�rdier en variable kan holde (kun int)
    Long = for�ger det totale antal v�rdier en variable kan holde (int og double)
    Short = short int, long = long int*/
    
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    
    double engineTemp = 6572.89;
    
    cout << "\nscore: "         << score << endl;
    cout << "distance: "        << distance << endl;
    cout << "playAgain: "         << playAgain << endl;
    // Skipping shieldsUp, since you don't normally print a boolean value (true - false)
    cout << "lives: "            << lives << endl;
    cout << "aliensKilled: "     << aliensKilled << endl;
    cout << "engineTemp: "       << engineTemp << endl;
    
    int fuel;
    cout << "\nHow much fuel do you have? Type in a number with your keyboard: ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;
    
    typedef unsigned short int ushort; /* her g�res ushort til unsigned short int
    Signed = variable kan holde b�de positive og negative v�rdier
    Unsigned = kun positive v�rdier
    Ingen �ndrer dog det totale antal v�rdier en variable kan holde: de �ndrer
    kun range of values
    Signed = default v�rdi for int typer*/
    ushort bonus = 10*fuel; /* ushort bonus er det samme som at skrive unsigned short int bonus
    bonus udregnes ved at gange fuel med 10*/
    cout << "\nbonus: " << bonus << endl;
    
    return 0;
}
