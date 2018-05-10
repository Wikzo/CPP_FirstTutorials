// Tic-Tac-Toe board
// Demonstrates multidimensional arrays

#include <iostream>

using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = { {'0', 'X', '0'},
                                     {' ', 'X', 'X'},
                                        {'X', '0', '0'} };
                                        
    // ROWS = vandret/horisontalt
    // Columns = lodret/vertikalt
    // board[0][1] = X
    // board[1][0] = mellemrum
    cout << "Here's the tic-tac-toe board:\n";  
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLUMNS; ++j)
            cout << board[i][j];
        cout << endl;
    }
    // først vises board[0][0]
    // så vises board[0][1]
    // så vises board[0][2]
    // senere vises board[1][0] osv.
    
    cout << "\nX moves to the empty location.\n\n";
    
    board[1][0] = 'X'; // den tomme plads ' ' bliver til 'X'
    
    cout << "Now the tic-tac-to bord is:\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLUMNS; ++j)
            cout << board[i][j];
        cout << endl;
    }
    
    cout << "\nX wins!";
    
    return 0;
    
}
