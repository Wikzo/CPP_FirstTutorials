#include <iostream>
using namespace std;

int main()
{
    int unsigned numberOne, numberTwo, numberThree;
    
    cout << "Please input a number: ";
    cin >> numberOne;
    
    cout << "\nPlease input another number: ";
    cin >> numberTwo;
    
    cout << "\nPlease input a final number: ";
    cin >> numberThree;
    
    cout << "\nThe average of " << numberOne << ", " << numberTwo << " and " << numberThree << " is: "
    << (numberOne + numberTwo + numberThree)/3 << endl;
    
    return 0;   
}
    
