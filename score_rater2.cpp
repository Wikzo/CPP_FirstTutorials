// Score rater 2.0
// Demonstrates the else clause

#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    
    if (score >= 1000)
       cout << "Flot. Du fik 1000 eller flere points." << endl;
    else
        cout << "Ikke noget specielt. Du fik mindre end 1000 points." << endl
         << endl;
        

// Dette virker ikke, da if (false) ikke er associeret med else. Derfor vises intet
    if (false)
       if (true)
          cout << "This will never be displayed.";
       else
           cout << "This will always be displayed.";


// Ved at tilføje nogle curly braces kan det virke:
   if (false)
   {
      if (true)
         cout << "This will never be displayed.";
   }
   else
   cout << "Dette vil altid blive vist.\n\n";
   
   
   
   switch (score)
   {
          case 2:     ++score; cout << "1 lægges til. Dit tal er nu " << score << endl;
                      break;
          case 3:     cout << "Hurra, tallet er " << score << endl;
                      break;
          case 4:     cout << "Hurra, tallet er " << score << endl;
                      break;
          default:    cout << "Dit tal er hverken 2, 3 eller 4. Derfor lægges 1 til dit tal: 1 + " << score << " = " << ++score << endl;
          }
   
    return 0;   
}
