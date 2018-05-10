// Word Jumble 2.0
// The classic word jumble game where the player can ask for a hint
// Now with points based on the word's length + how many guesses you use

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    //WORDS[x][WORD = string object, et af ordene
    // WORDS[x][HINT] = tilsvarende hint til ord x
    {
          {"wall", "Do you feel you are banging you head against something?"},
          {"glasses", "These might help you see the answer."},
          {"labored", "Going slowly, is it?"},
          {"persistent", "Keep at it."},
          {"jumble", "It's what this game is all about."}
    };
    
    srand(time(0));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD]; // word to guess
    string theHint = WORDS[choice][HINT]; // hint for word
    
    string jumble = theWord; // jumbled version of word
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    // to random bogstaver af jumble findes og byttes rundt    
    }
    
    int points = jumble.size();
    int tries = 0;
    int hintTries = 0;
    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to shut down the game.\n";
    cout << "The jumble is: " << jumble;
    
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;
    
    while ((guess != theWord) && (guess != "quit"))
    {
          ++tries;
          if (guess == "hint")
             cout << theHint;
          else
              cout << "Sorry, that's not it.";
          
          cout << "\n\nYour guess: ";
          cin >> guess;
    }
    ++tries;
    if (guess == theWord)
              cout << "\nThat's it! You guessed it in " << tries << " tries" << endl;
              cout << "Your score: " << (points - tries) << endl;
              cout << "Thanks for playing.\n";
       
    return 0;
    
}   
       
    
    
    
