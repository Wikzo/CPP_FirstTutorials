// Hero's Inventory 2.0
// Demonstrates vectors (dynamisk array)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory; // laver en tom vektor (inventory) som kan indeholder strings
    inventory.push_back("sword"); // .push_back tilføjer nyt element til enden af vektoren
    inventory.push_back("armor"); // inventory[0] = sword, inventory[1] = armor, inventory[2] = shield
    inventory.push_back("shield");
    
    cout << "You have " << inventory.size() << " items.\n";
    // inventory = vektor
    // derfor viser inventory.size() antal elementer i vektoren = 3
    
    cout << "\nYour items:\n";
    for (int i = 0; i < inventory.size(); ++i)
        cout << "- " << inventory[i] << endl;
        
    cout << "\nYou trade yor sword for a battle axe.";
    inventory[0] = "battle axe"; // sword bliver til battle axe
    cout << "\nYour items are now:\n";
    for (int i = 0; i < inventory.size(); ++i)
        cout << "- " << inventory[i] << endl;
        
    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n"; // længden af ordet battle axe =10
    
    cout << "\nYour shield is destroyed in a fierce battle!!";
    inventory.pop_back(); // .pop_back fjerner det sidste element i vector + reducerer vector størrelse med 1
    cout << "\nYour items then are:\n";
    for (int i = 0; i < inventory.size(); ++i)
        cout << "- " <<  inventory[i] << endl; // shield er nu fjernet
    
    cout << "\nYou were robbed of all of your possessions by a nasty thief...";
    inventory.clear(); // .clear fjerner alt i vector + reducerer dens størrelse til 0
    
    if (inventory.empty()) // hvis empty = true
       cout << "\nYou have nothing in your inventory.\n";
    else
        cout << "\nYou have at least one item in your inventory.\n";
        
    return 0;
    
}
