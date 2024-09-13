#include<iostream>
using namespace std;

template<typename T>
class Vector {

private:
    T* elem;    // Pointer to elements of type T
    int sz;     // Size of the vector

public:
    Vector(int s) : elem{new T[s]}, sz{s} {}   // Constructor
    ~Vector() { delete[] elem; }               // Destructor

    T& operator[](int i) { return elem[i]; }   // Access element
    const T& operator[](int i) const { return elem[i]; }  // Access (const)

    int size() const { return sz; }  // Return size of vector
};

int main() {
    Vector<int> vi(10);      // Vector of integers
    Vector<double> vd(5);    // Vector of doubles

    for (int i = 0; i < vi.size(); i++){
        vi[i] = i;
    } 
    for (int i = 0; i < vd.size(); i++){
        vd[i] = i * 1.1;
    } 

    // Access and print elements
    for (int i = 0; i < vi.size(); i++){
        cout << vi[i] << " ";
    } 
    cout << endl;

    for (int i = 0; i < vd.size(); i++){
        cout << vd[i] << " ";
    } 
    cout << endl;

    return 0;
}