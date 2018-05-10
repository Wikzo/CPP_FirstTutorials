// High Scores
// Demonstrates algorithms

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int>::const_iterator iter;
    // constant iterator = Post-it der ikke kan ændre det den referer til
    
    cout << "Creating a list of scores...";
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(7500);
    
    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)
    cout << *iter << endl;
    
    while (true)
    {
          cout << "\nFinding a score...";
          int score;
          cout << "\nEnter a score to find and press ENTER: ";
          cin >> score;
          iter = find(scores.begin(), scores.end(), score);
          // man kigger efter et tal mellem et interval:
          // find(start-værdi; slut-værdi; værdi der skal findes)
          // slut-værdi tælles IKKE med
          if (iter != scores.end())
          {
             cout << "Score found.\n";
             break;
          }
       
           cout << "Score not found. Try again.\n";
    }
       
    cout << "\nRandomizing scores...";
    srand(time(0));
    random_shuffle(scores.begin(), scores.end());
    // blander værdierne mellem scores.begin og scores.end
    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)
        cout << *iter << endl;
    
    cout << "\nSorting scores...";
    sort(scores.begin(), scores.end());
    // sorterer værdierne i stigende rækkefølge
    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)
        cout << *iter << endl;
        
    string word = "High Scores";
    cout << "\nShuffling the word '" << word << "': " << endl;
    srand(time(0));
    random_shuffle(word.begin(), word.end());
    cout << word << endl; 
        
    return 0;
}
     
       
