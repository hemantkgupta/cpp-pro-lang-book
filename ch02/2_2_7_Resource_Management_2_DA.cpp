#include<bits/stdc++.h>
using namespace std;


int main() {
    // 2. Dynamic Arrays
    int* arr = new int[5];  // Dynamically allocate an array of 5 integers

    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;  // Initialize the array elements
    }

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";  // Print array elements
    }

    delete[] arr;  // Deallocate the memory for the array
    return 0;
}
