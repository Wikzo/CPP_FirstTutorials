// Hero's Inventory 3.0
// Demonstrates iterators

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory;
    inventory.push_back("sword"),
    inventory.push_back("armor");
    inventory.push_back("shield");
    
    vector<string>::iterator myIterator;
    // en vector (som kan indeholde strings) f�r sat en iterator (myIterator) p�, en slags Post-it note
    /// denne kan �ndre og tilg� forskellige elementer i vectoren
    vector<string>::const_iterator iter;
    // en konstant iterator (iter) - kan ikke �ndre p� noget i vectoren, men iteratoren selv kan godt �ndres/flyttes
    
    cout << "Your available items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
    // inventory.begin() referer til en vectoren inventorys f�rste element = sword
    // iter (konstant iterator) = elementet med sword
    // inventory.end() member function teturns an iterator one past the last element in a container
    // iter bliver testet op mod inventory.end, indtil de ikke er forskellige l�ngere
    // const_iteratoren iter kan godt �ndres (++iter), men selve vectoren �ndres ikke
    // *iter referer til elementet og ikke iteratoren selv
    // "Treat this as the thing that the iterator ferences, not as the iterator itself"
    
        
    cout << "\nYou trade your sword for a battle axe.";
    myIterator = inventory.begin(); // iteratoren er nu elementet sword
    *myIterator = "battle axe"; // elementet myIterator referer til (sword) er nu battle axe
    // myIterator referer fortsat stadig til det f�rste element (nu battle axe)
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
        
    cout << "\nThe item name '" << *myIterator << "' has "; // myIterator referer til battle axe
    cout << (*myIterator).size() << " letters in it.\n"; // battle axe indeholder 10 tegn
    
    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << myIterator->size() << " letters in it.\n";
    // -> g�r det samme som ovenst�ende, men mere l�seligt ("syntactic sugar")
    // man kan bruge -> til at tilg� memember functions/data memebers of an object that an iterator references
    
    cout << "\nYou recover a crossbow from a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow");
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
    
    cout << "\nYour armor is destroyed in a hectic battle.\n";
    inventory.erase((inventory.begin() + 2));
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
        cout << *iter << endl;
        
    return 0;
    
}
