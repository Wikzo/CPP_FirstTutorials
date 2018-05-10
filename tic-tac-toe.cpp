/* Tic-Tac-Toe pseudocode

Create an empty Tic-Tac-Toe board
Display the game instructions
Determine who goes first
Display the board
While nobody's won and it's not a tie
      If it's the human's turn
         Get the human's move
         Update the board with the human's move
      Otherwise
               Calculate the computer's move
               Update the board with the computer's move
      Display the board
      Switch turns
Congratulate the winner or declare a tie*/

// Tic-Tac-Toe
// Plays the game of tic-tac-toe against a computer

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Global constants
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

// function prototype
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board, char human);
int computerMove(const vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);

// main function
int main()
{
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY); // vector med størrelsen 9, alle har værdien "EMPTY"
    
    instructions();
    char human = humanPiece();
    char computer = opponent(human);
    char turn = X;
    displayBoard(board);
    
    while (winner(board) == NO_ONE)
    {
          if (turn == human)
          {
              move = humanMove(board, human);
              board[move] = human;
          }
          else
          {
              move = computerMove(board, computer);
              board[move] = computer;
          }
          displayBoard(board);
          turn = opponent(turn);
    }
    
    announceWinner(winner(board), computer, human);
    
    return 0;
}

void instructions()
{
     cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe!\n";
     cout << "-- where human brain is pit against silicon processor\n\n";
     
     cout << "Make your move known by entering a number, 0 - 8. The number\n";
     cout << "corresponds to the desired board position, as illustrated:\n\n";
     
     cout << "            0 | 1 | 2\n";
     cout << "            ---------\n";
     cout << "            3 | 4 | 5\n";
     cout << "            ---------\n";
     cout << "            6 | 7 | 8\n\n";
     
     cout << "Prepare yourself, human. The battle is about to begin!";
}

char askYesNo(string question)
{
     char response;
     do
     {
          cout << question << " (y/n): ";
          cin >> response;
     } while (response != 'y' && response != 'n');
     
     return response;
}

int askNumber(string question, int high, int low)
{
    int number;
    do
    {
        cout << question << " (" << low << " - " << high << "): ";
        cin >> number;
    } while (number > high || number < low);
    
    return number;
    
}

char humanPiece()
{
     char go_first = askYesNo("Do you require the first move?");
     if (go_first == 'y')
     {
        cout << "\nThen take the first move. You'll need it...\n";
        return X;
     }
     else
     {
         cout << "\nYour bravery will be your death... I will go first, mwahaha...\n";
         return O;
     }
     
}

char opponent(char piece)
{
     if (piece == X)
        return O;
     else
         return X;
}

void displayBoard(const vector<char>& board)
{
     cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
     cout << "\n\t" << "---------";
     cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
     cout << "\n\t" << "---------";
     cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
     cout << "\n\n";
}

char winner(const vector<char>& board)
{
     // All possible winning rows
     const int WINNING_ROWS[8][3] = { {0, 1, 2},
                                        {3, 4, 5},
                                        {6, 7, 8},
                                        {0, 3, 6},
                                        {1, 4, 6},
                                        {2, 5, 8},
                                        {0, 4, 8},
                                        {2, 4, 6} };
                                        
     const int TOTAL_ROWS = 8;
     
     // if any winning row has three values that are the same (and not EMPTY),
     // then we have a winner
     for(int row= 8; row < TOTAL_ROWS; ++row)
     {
             if ( (board[WINNING_ROWS[row][0]] != EMPTY) &&
                  (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
                  (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]) )
             {
                  return board[WINNING_ROWS[row][0]];
             }
     }
     
     // since nobody has won, check for a tie (no empty squares left)
     // count() tæller antal gange en given værdi er til stede i en gruppe af container elements
     if (count(board.begin(), board.end(), EMPTY) == 0)
        return TIE;
        
        // since nobody has won and it isn't a tie, the game ain't over yet
        return NO_ONE;
        
}

// inlining a function = compiler makes a copy of the function everywhere
inline bool isLegal(int move, const vector<char>& board)
{
       return (board[move] == EMPTY);
}

int humanMove(const vector<char>& board, char human)
{
    int move = askNumber("Where will you move?", (board.size() -1));
    while (!isLegal(move, board))
    {
          cout << "\nThat square is already occupied, foolish human.\n";
          move = askNumber("Where will you move?", (board.size() - 1));
    }
    cout << "Fine...\n";
    return move;
}

/* AI computer work

1. If the computer can win on this move, make that move.

2. If the human can win on his next move, block it.

3. Otherwise, take the best remaining open square. The best square is the center.
The next best squares are the corners, and then the rest of the squares.*/

// doesn't pass board value by reference, since the board is going to be changed
// by working with a copy, the original vector is kept safe
int computerMove(vector<char> board, char computer)

// Implements step 1
{
   cout << "I shall take square number ";
   
   // iff computer can win on next move, make that move
   for(int move = 0; move < board.size(); ++move)
   {
           if (isLegal(move, board))
           {
              board[move] = computer;
              if (winner(board) == computer)
              {
                 cout << move << endl;
                 return move;
              }
              
              // done checking this move, undo it
              board[move] = EMPTY;
           }
           
   }
   
   // Implement step 2
   // if human can win on next move, block that move
   char human = opponent(computer);
   for(int move = 0; move < board.size(); ++move)
   {
           if (isLegal(move, board))
           {
              board[move] = human;
              if (winner(board) == human)
              {
                 cout << move << endl;
                 return move;
              }
              
              // done checking this move, undo it
              board[move] = EMPTY;
           }              
   }
   
   // Implement step 3
   // the best moves to make, in order
   const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
   // since no one can win on next move, pick best open square
   for(int i = 0; i < board.size(); ++i)
   {
           int move = BEST_MOVES[i];
           if (isLegal(move, board))
           {
              cout << move << endl;
              return move;
           }
   }
}

void announceWinner(char winner, char computer, char human)
{
     if (winner == computer)
     {
        cout << winner << "'s won!\n";
        cout << "As I predicted, human, I am triumphant once more -- proof\n";
        cout << "that computers are superior to humans in all regards.\n";
     }
     
     else if (winner == human)
     {
          cout << winner << "'s won!\n";
          cout << "No, no! It cannot be! Somehow you tricked me, human.\n";
          cout << "But never again! I, the computer, so swear it!\n";
     }
     
     else
     {
         cout << "It's a tie.\n";
         cout << "You were most lucky, human, and somehow managed to tie me.\n";
         cout << "Celebrate... for this is the best you will ever achieve.\n";
     }
}




        
        
