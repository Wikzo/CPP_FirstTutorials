// Scoping
// Demonstrates scopes

// Scopes er når man bruger curly brackets
// Variabler i scopes er kun synlig i den ene scope og ikke andre steder
// Variabler declared inde i en function = local variables
#include <iostream>

using namespace std;

void func();

int main()
{
    int var = 5; // local variable in main()
    cout << "In main() var is: " << var << "\n\n";
    
    func();
    
    cout << "Back in main() var is: " << var << "\n\n";
    
    {
         // var i dette scope eksisterer endnu ikke
         // derfor går computeren et trin op og finder var i main()
         cout << "In main() in a new scope var is: " << var << "\n\n";
         
         cout << "Creating new var in new scope.\n";
         int var = 10; // variable in new scope, hides other variable named var
         cout << "In main() in a new scope var is: " << var << "\n\n";
         // nu forsvinder var (10) for evigt, fordi scopet slutter
         
    }
    
    cout << "At end of main() var created in new scope no longer exists.\n";
    cout << "At end of main() var is: " << var << "\n";
    
    return 0;
    
}

void func()
{
     int var = -5; // local variable in func()
     cout << "In func() var is: " << var << "\n\n";
     // when func() ends, scopes are destroyed
}
