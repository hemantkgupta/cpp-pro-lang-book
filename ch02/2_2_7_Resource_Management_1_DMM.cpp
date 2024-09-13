#include<bits/stdc++.h>
using namespace std;


int main() {
    // 1. Dynamic Memory Management
    int* ptr = new int;    // Dynamically allocate an integer
    *ptr = 5;              // Assign a value
    cout << *ptr << endl;  // Print the value

    delete ptr;  // Deallocate memory
    return 0;
}
