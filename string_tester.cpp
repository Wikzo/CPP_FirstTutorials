// String Tester
// Demonstrates string objects

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1 = "Game";
    string word2("Over");
    string word3(3, '!'); // word3 = !!!
    
    string phrase = word1 + " " + word2 + word3; /* de tre ord sættes sammen via operator overload. + kan normalt
    ikke bruges sammen med strings ...*/
    cout << "The phrase is: " << phrase << "\n\n";
    
    cout << "The phrase has " << phrase.size() << " characters in it.\n";
    cout << "The phrase has " << phrase.length() << " characters in it.\n\n";
    // size() member function - .size og .length er member function og finder antal tegn i stringen phrase
    
    cout << "The character at position 0 is: " << phrase[0] << "\n\n";
    // Indexing a string object with subscripting operator
    // phrase[0] finder det første tegn i stringen. phrase[11] finder det sidste
    // string med n tegn kan blive indexed fra position 0 til n-1
    
    cout << "Changing the character at position 0.\n";
    phrase[0] = 'L';
    cout << "The phrase is now: " << phrase << "\n\n";
    // det første tegn ændres fra G til L
    
    for (int i = 0; i < phrase.size(); ++i)
        cout << "Character at position " << i << " is: " << phrase[i] << endl;
        // phrase[0], phrase[0+1], phrase[0+2] osv. vises
        // the loop iterates through all of the valid positions of phrase
        
    cout << "\nThe sequence 'Over' begins at location " << phrase.find("Over")
         << endl;
    // find() member function finder det sted hvor ordet er og giver dernæst startpositionen i form af et heltal
    
         
    if (phrase.find("eggplant") == string::npos)
       cout << "'eggplant' is not in the phrase.\n\n";
    // sring::npos = a position number that can't exist
    
    int location;
    location = phrase.find("eggplant", 5);
    cout << location << endl;    
    // leder efter "eggplant" efter position 5
       
    phrase.erase(4, 5); // 4 = beginning position, 5 = length of substring
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase(4); // sletter alt efter position 4
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase(); // sletter alt
    cout << "The phrase is now: " << phrase << endl;
    
    if (phrase.empty()) // empty() member function - hvis tom = true, hvis ikke-tom = false
       cout << "\nThe phrase is no more :(\n";
       
    return 0;
    
}
