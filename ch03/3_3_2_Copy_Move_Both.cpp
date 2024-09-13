#include<iostream>
using namespace std;

class Vector {
private:
    double* elem;
    int sz;
public:
    // Constructor
    Vector(int s) : elem{new double[s]}, sz{s} {}

    // Destructor
    ~Vector() { delete[] elem; }

    // Copy constructor (deep copy)
    Vector(const Vector& a) : elem{new double[a.sz]}, sz{a.sz} {
        for (int i = 0; i != sz; ++i)
            elem[i] = a.elem[i];
    }

    // Copy assignment (deep copy)
    Vector& operator=(const Vector& a) {
        if (this == &a){
            return *this;           // self-assignment check
        } 
        double* p = new double[a.sz];
        for (int i = 0; i != a.sz; ++i){
            p[i] = a.elem[i];
        }
            
        delete[] elem;  // Release old memory

        elem = p;
        sz = a.sz;
        
        return *this;
    }

    // Move constructor (transfer ownership)
    Vector(Vector&& a) : elem{a.elem}, sz{a.sz} {
        a.elem = nullptr;  // Leave a in a valid but empty state
        a.sz = 0;
    }

    // Move assignment (transfer ownership)
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
    Vector v1(100);         // Create vector of size 100
    Vector v2 = v1;         // Copy v1 (deep copy)
    Vector v3 = std::move(v1); // Move v1 to v3 (v1 is now empty)

    return 0;
}

