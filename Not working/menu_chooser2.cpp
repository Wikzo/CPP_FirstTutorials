// Menu Chooser 2.0
// Choosing difficulty via enumeration

#include <iostream>
using namespace std;

int main()
{
    unsigned int choice;
    
    
    cout << "Difficulty levels:\n\n1 - Easy\n2 - Normal\n3 - Hard\n\n";
    cout << "Choose a difficulty: ";
    cin >> choice;
       
    enum choice {EASY = 1 , NORMAL = 2, HARD = 3}
    
    
    cout << "\nYou chose" << NORMAL << endl;
    
    return 0;
    
}
