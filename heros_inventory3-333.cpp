// Hero's Inventory 3 (for anden gang)
// Demonstrates iterators

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    vector<string>::iterator myIterator;
    /* en iterator fungerer som en Post-it seddel
    kan referer til et bestemt element og ændre dette, men kan IKKE ændres selv */
    vector<string>::const_iterator iter;
    /* en constant iterator er også en Post-it seddel, men denne er konstant.
    Selve Post-it'en KAN ændres, men det den er sat fast til, kan IKKE.
    Derfor er den mere sikker at arbejde med (read-only) */
    
    cout << "Your items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
    /* inventory.begin() = det første string-element = "sword"
    iter (som er en konstant og ikke kan ændre på vectorens indhold) = sword
    så længe iter er forskellig fra inventory.end(), som er et tomt element
    efter den sidste string, vil for loop'en kører igennem
    
    *iter = en dereference operator
    "Treat this as the thing that the iterator references, not as the iterator itself" */
        
    cout << "\nYou trade your sword for a battle axe.";
    myIterator = inventory.begin();
    *myIterator = "battle axe";
    /* Det som myIterator referer til ("sword") bliver nu til "battle axe"
    men selve myIterator ændres ikke OG referer stadig til det første element */
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
        
    cout << "\nThe iten name '" << *myIterator << "' has ";
    cout << (*myIterator).size() << " letters in it.\n"; // husk paranteser
    
    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << myIterator->size() << " letters in it.\n"; // mere læsevenlig udgave (syntactic sugar)
    
    cout << "\nYou recover a crossbow from a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow");
    // .insert indsætter lige før elementet i parantes, så alt bliver flyttet med én
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
    
    cout << "\nYour armor is destroyed in a fierce battle.";
    inventory.erase((inventory.begin() + 2));
    // .erase sletter elementet, som kommer 2 efter det første
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
        
    return 0;
}
            
        
