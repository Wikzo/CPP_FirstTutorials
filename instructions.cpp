// Instructions
// Demonstrates writing new functions

#include <iostream>

using namespace std;

// function prototype (declaration) no return value = void
// en prototype er en "smagsprøve" på en function som snart skal bruges
// dennes definition kommer først senere, men kan allerede nu godt bruge den
void instructions();

int main()
{
    instructions(); // ved at skrive dette kaldes/vises instructions()
    instructions();
    instructions();
    return 0;
}

// function definition (UDEN semikolon)
void instructions()
{
     cout << "Welcome to the most fun game you've ever had with text!\n\n";
     cout << "here's how to play the game...\n";
}
