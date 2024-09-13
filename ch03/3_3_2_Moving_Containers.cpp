#include<iostream>
using namespace std;

class Vector {

private:
    double* elem;
    int sz;

public:
    Vector(int s) : elem{new double[s]}, sz{s} {}
    ~Vector() { delete[] elem; }

    // Move constructor
    Vector(Vector&& a) : elem{a.elem}, sz{a.sz} {
        a.elem = nullptr;                       // leave a in a valid but empty state
        a.sz = 0;
    }

    // Move assignment
    Vector& operator=(Vector&& a) {
        if (this == &a){
            return *this;  // self-assignment check
        } 
        delete[] elem;  // Release old memory

        elem = a.elem;  // Take ownership of a's data
        sz = a.sz;
        
        a.elem = nullptr;
        a.sz = 0;
        
        return *this;
    }
};

int main(){

    Vector v1(1000);  // Create a vector of size 1000
    Vector v2 = move(v1);  // Move v1's resources to v2

    return 0;
}