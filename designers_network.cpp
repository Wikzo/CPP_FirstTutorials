// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\tGame Designer's Network\n";
    cout << "\tIf you are a guest, please enter 'guest' as either username or password\n";
    int security = 0;
    
    string username;
    cout << "\nUsername: ";
    cin >> username;
    
    string password;
    cout << "Password: ";
    cin >> password;
    
    if (username == "S.Meier" && password == "civ") // && means both, AND
    {
       cout << "\nHey, Sid!";
       security = 5;
    }
    
    if (username == "S.Miyamoto" && password == "mario")
    {
       cout << "\nKonnichiwa, Miyamoto-san!";
       security = 5;
    }
    
    if ( (username == "W.Wright") && (password == "sims") )
    {
        cout << "\nHey, Sims-man!";
        security = 5;
    }
    
    if (username == "guest" || password == "guest") // || means OR
    {
       cout << "\nWelcome, guest.";
       security = 1;
    }
    
    if (!security) //1 means opposite, NOT
       cout << "\nYour login failed.";
    
    // NOT > AND > OR
    
    return 0;
    
}
