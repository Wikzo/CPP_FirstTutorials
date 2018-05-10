// Mad-Lib
// Creates a story based on user input

#include <iostream>
#include <string>

using namespace std;

int askNumber(int num = 1);

int main()
{
    askNumber();
    
    return 0;

}

int askNumber(int num = 1)
{
    cout << "Please enter a number: ";
    cin >> num;
    cout << "Thanks for entering " << num;
}   
    
