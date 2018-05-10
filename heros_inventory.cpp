// Heros inventory
// Demonstrates arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 10;// det er en god idé at have en konstant for maks. elementer i et array
    string inventory[MAX_ITEMS]; // inventory 0-9
    /* array - skal vide hvor meget plads den skal allokeres,
    i dette tilfælde 10 string objects.
    Man kan også skrive string inventory[MAX_ITEMS] = {"sword", "armor", "shield"}
    for at indikere, at den skal indeholde 10 string objects, og de tre første er sword, armor og shield
    man kan også skrive string inventory[] = {"sword", "armor", "shield"} og den vil nu indeholde tre string objects*/
    
    
    int numItems = 0;
    
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";
    /* inventory 0 = sword
    inventory 0+1 = armor
    inventory 1+1 = shield
    numItems til sidst = 1+1+1 = 3
    da det hedder numItems++ lægges der først til til sidst*/
    
    cout << "You can max. carry 10 items. Your items are:\n";
    for (int i = 0; i < numItems; ++i)
        cout << i << ". " << inventory[i] << endl;
    // inventory 0-3 vises
    
          
    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe"; // inventory[0] går fra sword til battle axe
    cout << "\nYour items are now:\n";
    for (int i = 0; i < numItems; ++i)
        cout << i << ". " << inventory[i] << endl;
        
    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";
    // size() member function af elementet inventory[0]
    
    cout << "\nYou find a healing potion.";
    if (numItems < MAX_ITEMS) // hvis number of items < max items = giv potion - bounds checking
       inventory[numItems++] = "healing potion"; // potion lægges som det næste nummer i rækken: 3
    else
        cout << "You have too many items and can't carry any more."; // ellers for mange...
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
        cout << i << ". " << inventory[i] << endl;
        
    return 0;
    
}
