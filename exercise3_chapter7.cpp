// Exercise 3, chapter 7

#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int& b = a;
    int* c = &b;
    
    cout << &a << endl;
    cout << &b << endl;
    cout << &(*c) << endl;
    
    return 0;
}

// All display same memory address
