// Hangmand
// The classic game of hangman

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype> //bruges til at konverterer bogstaver til uppercase

using namespace std;

int main()
{
    // setup
    const int MAX_WRONG = 8; //maximum number of incorrect guesses allowed
    vector<string> words; //collection of possible words to guess
    words.push_back("HEJ");
    words.push_back("MED");
    words.push_back("DIG");
    
    srand(time(0));
    random_shuffle(words.begin(), words.end()); //blander ordene
    const string THE_WORD = words[0]; //word to guess
    int wrong = 0; //number of incorrect guesses
    string soFar(THE_WORD.size(), '-'); //word guesed so far
    string used = ""; //letters alread7 guessed
    
    cout << "Welcome to Hangman. Good luck!\n";
    
    //main loop
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
          cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left.\n";
          cout << "\nYou've used the following letters:\n" << used << endl;
          cout << "\nSo far, the word is:\n" << soFar << endl;
          
          char guess;
          cout << "\n\nType your guess and press ENTER: ";
          cin >> guess;
          guess = toupper(guess); //make uppercase, since secret word is in uppercase
          while (used.find(guess) != string::npos)
          {
                cout << "\nYou've already guessed " << guess << endl;
                cout << "Enter a new guess: " ;
                cin >> guess;
                guess = toupper(guess);
          }
          
          used += guess;
          
          if (THE_WORD.find(guess) != string::npos)
          {
             cout << "That's right! " << guess << " is in the word.\n";
          
             //update soFar to include newly guessed letter
             for (int i = 0; i < THE_WORD.length(); ++i)
                 if (THE_WORD[i] == guess)
                 soFar[i] = guess;
          }
          else
          {
              cout << "Sorry, " << guess << " isn't in the word.\n";
              ++wrong;
          }
    }
    
    //shut down
    if (wrong == MAX_WRONG)
       cout << "\nYou've been hanged!";
    else
        cout << "\nYou guessed the word!";
    cout << "\nThe word was " << THE_WORD << endl;
    
    return 0;
}
                
