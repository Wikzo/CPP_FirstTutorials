// Score Rater
// Demonstrates the if statement

#include <iostream>
using namespace std;

int main()
{
    if (true)
    cout << "This is always displayed.\n\n";
    
    if (false)
    cout << "This is never displayed :(\n\n";
    
    if (false); // man skal ikke lave semikolon efter et if statement
    cout << "This is never displayed :(\n\n";
    
    int score = 1000;
    cout << "Din score er: " << score << endl;
    
    if (score) // alle ikke-nul tal = true, nul = false. score = 1000 = true
    cout << "Okay, at least you didn't score zero!\n\n";
    
    if (score > 500)
    cout << "Du fik mere end 500 points, tillykke!\n\n";
    
    int unsigned scoreEt = 10, scoreTo = 20;
    cout << "Score et = " << scoreEt << ", Score to = " << scoreTo << endl;
    
    if (scoreEt > scoreTo)
    cout << "Score et er højere end score to" << endl;
    
    if (scoreEt < scoreTo)
    cout << "Score et er mindre end score to" << endl;
    
    if (score == 1000)
    {
              cout << "\nDu fik fuldt hus, " << score << " points!";
              cout << "\nVildt nok, mayn!";
              if (score < 2000)
              cout << "\nMen du fik dog ikke 2000 points ...";
    }
    
    if (score > 500)
    {
              cout << "\nDu fik mere end 500 points\n";
              if (score >= 1000)
              cout << "Du fik 1000 points eller mere. Nice!" << endl;
    }
    
    if (score > 5000)
    cout << "\n\nDu er sgu sej. Du fik mere end 5000 points!" << endl;
    else
    cout << "\n\nDu var okay. Dog fik du ikke 5000 points." << endl;
    
    

    
    return 0;
    
}
