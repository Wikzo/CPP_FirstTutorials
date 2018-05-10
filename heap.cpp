// Heap
// Demonstrates dynamically allocating memory

#include <iostream>

using namespace std;

int* intOnHeap();   // returns an int on the heap
void leak1();       // creates a memory leak
void leak2();       // creates another memory leak

int main()
{
    int* pHeap = new int; // new int allocates memory of one int, pHeap points to this memory chunk
    *pHeap = 10;
    // another way to do the same thing:
    // int* pHeap = new int(10);
    cout << "*pHeap: " << *pHeap << "\n\n";
    
    int* pHeap2 = intOnHeap();
    cout << "*pHeap2: " << *pHeap2 << "\n\n";
    
    // memory on heat doesn't free automatically, therefore you need to delete it manually
    cout << "Freeing memory pointed to by pHeap.\n\n";
    delete pHeap;
    
    cout << "Freeing memory pointed to by pHeap2.\n\n";
    delete pHeap2;
    
    // pHeap1 og pHeap2 pointer til et stykke memory, som ikke længere er tilgængeligt
    // derfor skal de reasignes til nye værdier
    // get rid of dangling pointers
    pHeap = 0;
    pHeap2 = 0;
    
    return 0;
    
}

int* intOnHeap()
{
     int* pTemp = new int(20);
     return pTemp;
}


// drip1 = local variable and ceases to exist when function ends
// the free allocated memory will be lost forever
void leak1()
{
     int* drip1 = new int(30);
}


// drip2 first points to 50, then to 100
// the new int(50) will no longer be accesible - it's a memory leak
void leak2()
{
     int* drip2 = new int(50);
     drip2 = new int(100);
     delete drip2;
}
