// Book chooser

#include <iostream>
#include <string>

using namespace std;


int main()
{   
    enum fields {BOOK, AUTHOR, NUM_FIELDS};
    const int MAX_BOOKS = 3;
    string BOOKS[MAX_BOOKS][NUM_FIELDS] = 
    {
           {"Flow: The Psychology of Optimal Experience", "Mihaly Csikszentmihalyi"},
           {"The Design of Everyday Things", "Don Norman"},
           {"Predictably Irrational: The Hidden Forces that Shape Our Decisions", "Dan Ariely"}
    };

    
    cout << "Your available books are:\n";
    for (int i = 0; i < MAX_BOOKS; ++i)
        cout << "- " << BOOKS[i] << endl;
    
    char again = 'y';
    while (again == 'y')
    {
            
            while (true)
            {
                  string read;
                  cout << "\nDon't know what to read? Let me choose for you!" << endl;
                  cout << "Type 'read': ";
                  cin >> read; 
                  if (read == "read")
                     break;
                     if (read != "read")
                        continue;
          
             }
    
             srand(time(0));
             int bogen = (rand() % MAX_BOOKS);
             string forfatter = BOOKS[bogen][BOOK];
    
             if (bogen == 1)
             cout << "\nHorray!You are going to read:\n" << "'" << BOOK[bogen] << "'" << " by " << AUTHOR[bogen] << endl;

             if (bogen == 2)
             cout << "\nWoopay! You are going to read:\n" << "'" << BOOK[1] << "'" << " by " << AUTHOR[1] << endl;
    
             if (bogen == 3)
             cout << "\nYay-super-day! You are going to read:\n" << "'" << BOOK[2] << "'" << " by " << AUTHOR[2] << endl;
    
    cout << "\nThat wasn't so hard, was it. Or do you want a second chance? (y/n): ";
    cin >> again;
    }        

    cout << "\nBye for now. I hope you liked my choice! :D";
    
    return 0;
    
}
