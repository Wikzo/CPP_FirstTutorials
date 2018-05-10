// Book chooser

#include <iostream>
#include <string>

using namespace std;


int main()
{   
    const int MAX_BOOKS = 3;
    string books[] = {"Flow: The Psychology of Optimal Experience", "The Design of Everyday Things", "Predictably Irrational: The Hidden Forces that Shape Our Decisions"};
    string authors[] = {"Mihaly Csikszentmihalyi", "Don Norman", "Dan Ariely"};
    
    cout << "Your books are:\n";
    for (int i = 0; i < MAX_BOOKS; ++i)
        cout << "- " << books[i] << endl;
    
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
             int bogen = rand() % 3 + 1;  
    
             if (bogen == 1)
             cout << "\nHorray!You are going to read:\n" << "'" << books[0] << "'" << " by " << authors[0] << endl;

             if (bogen == 2)
             cout << "\nWoopay! You are going to read:\n" << "'" << books[1] << "'" << " by " << authors[1] << endl;
    
             if (bogen == 3)
             cout << "\nYay-super-day! You are going to read:\n" << "'" << books[2] << "'" << " by " << authors[2] << endl;
    
    cout << "\nThat wasn't so hard, was it. Or do you want a second chance? (y/n): ";
    cin >> again;
    }        

    cout << "\nBye for now. I hope you liked my choice! :D";
    
    return 0;
    
}
