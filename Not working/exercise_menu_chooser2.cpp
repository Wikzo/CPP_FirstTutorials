// Menu Chooser
// Demonstrates the switch statement

#include <iostream>
using namespace std;

int main()
{
    enum difficulty {EASY = 1, NORMAL, HARD};
    cout << "Choose a difficulty:\n\n";
    cout << "1 - EASY\n2 - NORMAL\n3 - HARD\n\n";
    
    

    
    cout << "You chose: " << difficulty(1) << endl;
    
    return 0;
}
