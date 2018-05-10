// Global Reach
// Demonstrates global variables

#include <iostream>

using namespace std;

int glob = 10; // global variable, declared outside of functions

// prototyper
void acces_global();
void hide_global();
void change_global();

int main()
{
    cout << "In main() glob is: " << glob << "\n\n";
    acces_global();
    
    hide_global();
    cout << "In main() glob is: " << glob << "\n\n";
    
    change_global();
    cout << "In main() glob is: " << glob << "\n\n";
    
    return 0;
}

void acces_global()
{
     cout << "In acces_global() glob is: " << glob << "\n\n";
}

void hide_global()
{
     int glob = 0; // new local variable glob hides the old global variable glob
     cout << "In hide_global() glob is: " << glob << "\n\n";
}

void change_global()
{
     glob = -10; // change global variable glob
     cout << "In change_global() glob is: " << glob << "\n\n";
}
