// Hero's Inventory 2.0 (for anden gang)
// Demonstrates vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory;
    inventory.push_back("sword"); // .push_back tilføjer noget til sidst i rækken
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    cout << "You have " << inventory.size() << " items.\n";
    
    cout << "\nYour items:\n";
    for (int i = 0; i < inventory.size(); ++i)
        cout << inventory[i] << endl;
        
    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items are now:\n";
    for (int i = 0; i < inventory.size(); ++i)
        cout << inventory[i] << endl;
    
    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";
    
    cout << "\nYour shield is destroyed in a fierce battle.";
    inventory.pop_back(); // .pop_back sletter det sidste i rækken
    cout << "\nNow your items are:\n";
    for (int i = 0; i < inventory.size(); ++i)
        cout << inventory[i] << endl;
        
    cout << "\nYou were robbed of all your possessions by a nasty thief.";
    inventory.clear();
    
    if (inventory.empty())
       cout << "\nYou have nothing.\n";
    else
        cout << "\nYou have at least one item in your inventory.\n";
        
    return 0;
}
