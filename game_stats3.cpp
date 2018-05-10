// Game Stats 3.0
// Demonstrates constants

#include <iostream>
using namespace std;

int main()
{
    const int ALIEN_POINTS = 150; //const = en konstant, som aldrig kan ændre værdi
    int aliensKilled = 10;
    int score = aliensKilled*ALIEN_POINTS;
    cout << "score: " << score << endl;
    
    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    /*enum er et sæt af unsigned int konstanter
    som er relateret og har en særlig rækkefølge
    Den første enumeration = 0, den anden 1, den tredje 2 osv.
    NOVICE = 0
    EASY = 1
    NORMAL = 2
    HARD = 3
    UNBEATABLE = 4*/
    difficulty myDifficulty = EASY; // myDifficulty = EASY (1)
    
    enum ship {FIGHTER = 25, BOMBER, CRUISER = 50, DESTROYER = 100};
    // her tillægges hver enumeration en værdi, undtagen BOMBER som tager 25+1 = 26
    ship myShip = BOMBER; // myShip = BOMBER (26)
    cout << "\nTo upgrade my ship to a Cruiser will cost "
    << (CRUISER - myShip) << " Resource Points.\n"; // forskellen mellem CRUISER og BOMBER = 50-26 = 24
    return 0;
}
