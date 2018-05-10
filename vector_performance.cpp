// Vector performance and memory
// Using capacity() Member Function

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
         cout << "Creating a 10 element vector to hold scores.\n";
         vector<int> scores(10, 0); // initialize all 10 elements to 0
         cout << "Vector size is: " << scores.size() << endl;
         cout << "Vector capacity is: " << scores.capacity() << endl;
         
         cout << "\nAdding a score.\n";
         scores.push_back(0); // memory is reallocated to accommodate growth
         cout << "Vector size is: " << scores.size() << endl;
         cout << "Vector capacity is: " << scores.capacity() << endl;
         
         cout << "\nUsing the reserver() member function...\n";
         cout << "Reserving more memory" << endl;
         vector<int> scores2(10, 0);
         scores2.reserve(20); // reserve memory for 10 additional elements
         cout << "Vector size is: " << scores2.size() << endl;
         cout << "Vector capacity is: " << scores2.capacity() << endl;
         
         cout << "\nAdding a score (again)\n";
         scores2.push_back(0);
         cout << "Vector size is: " << scores2.size() << endl;
         cout << "Vector capacity is: " << scores2.capacity() << endl;
         
         return 0;
}
