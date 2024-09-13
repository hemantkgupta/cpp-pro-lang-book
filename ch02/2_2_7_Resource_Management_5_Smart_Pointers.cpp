#include<bits/stdc++.h>
using namespace std;


int main() {
    unique_ptr<int> ptr = make_unique<int>(10);  // Allocate an integer
    cout << *ptr << endl;  // Access the value
    // No need to explicitly delete the pointer; it will be cleaned up automatically

    shared_ptr<int> ptr1 = make_shared<int>(20);  // Shared ownership
    shared_ptr<int> ptr2 = ptr1;  // ptr2 shares ownership with ptr1

    cout << *ptr1 << " " << *ptr2 << endl;


    return 0;
}
