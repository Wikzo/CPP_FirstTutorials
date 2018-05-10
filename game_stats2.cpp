// Game Stats 2.0
// Demonstrates arimethmetic operations with variables


#include <iostream>
using namespace std;

int main ()
{
    int unsigned score = 1000;
    cout << "score: " << score << endl;
    
    // altering the value of score
    score = score + 100;
    cout << "score: " << score << endl;
    
    
    // combined assignment operator
    score +=100;
    cout << "score: " << score << endl;
    
    // increment operators
    int lives = 3;
    ++lives; //prefix increment
    cout << "lives: " << lives << endl;
    
    lives = 3;
    lives++; //postfix increment
    cout << "lives: " << lives << endl;
    
    lives = 3;
    int bonus = ++lives*10; // her lægges 1 til 3 og så ganges med 10. Lives = 3+1 = 4. Bonus = 4*10 = 40
    cout << "++lives, bonus: " << lives << ", " << bonus << endl;
    
    lives = 3;
    bonus = lives++*10; // her ganges 3 med 10 og så tillæges 1. Bonus = 3*10. Lives = 3+1 = 4
    cout << "lives++, bonus: " << lives << ", " << bonus << endl;
    
    lives = 3;
    bonus = --lives*10; // (3-1)*10 = 20
    cout << "--lives, bonus: " << lives << ", " << bonus << endl;
    
    lives = 3;
    bonus = lives---*10; // bonus = 3*10 = 30. Lives = 3-1 = 2
    cout << "lives---, bonus: " << lives << ", " << bonus << endl;
    
    //integer wrap around
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score; // her tillægges maksimalvariablen 1 = det hele går tilbage til 0
    cout << "score: " << score << endl;
    
    return 0;
}
