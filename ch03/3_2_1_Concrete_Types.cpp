#include <iostream>
using namespace std;

class Vector {

private:
    double* elem;                   // pointer to elements
    int sz;                         // the size of the vector

public:
    // Constructor
    Vector(int s) : elem{new double[s]}, sz{s} {}

    // Destructor
    ~Vector() { delete[] elem; }

    // Access element (writeable) - Why we are returning reference?
    double& operator[](int i) { return elem[i]; }

    // Get the size of the vector
    int size() const { return sz; }
};

int main() {
    Vector v(5);                            // Create a vector with 5 elements
    for (int i = 0; i < v.size(); i++) {
        v[i] = i * 1.1;                     // Initialize the vector
    }
    for (int i = 0; i < v.size(); i++) {
        cout << "v[" << i << "] = " << v[i] << endl;  // Print elements
    }
    return 0;
}