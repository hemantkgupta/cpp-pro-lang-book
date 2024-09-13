#include<bits/stdc++.h>
using namespace std;

class Resource {
private:
    int* data;

public:
    // Constructor
    Resource() {
        data = new int[10];  // Dynamically allocate memory
        cout << "Resource acquired" << endl;
    }

    // Destructor
    ~Resource() {
        delete[] data;  // Free the allocated memory
        cout << "Resource released" << endl;
    }
};


int main() {
    // 3.  Constructors and Destructors
    Resource res;  // Object created, constructor is called
    // When the object goes out of scope, the destructor is called automatically


    return 0;
}
