class Vector {

private:
    double* elem;
    int sz;

public:
    Vector(int s) : elem{new double[s]}, sz{s} {}
    ~Vector() { delete[] elem; }

    // Copy constructor
    Vector(const Vector& a) : elem{new double[a.sz]}, sz{a.sz} {
        for (int i = 0; i != sz; i++)
            elem[i] = a.elem[i];  // Copy each element
    }

    // Copy assignment
    Vector& operator=(const Vector& a) {
        if (this == &a){
            return *this;  // self-assignment check
        } 
        double* p = new double[a.sz];

        for (int i = 0; i != a.sz; ++i){
            p[i] = a.elem[i];  // Copy elements
        }
        
        delete[] elem;  // Release old memory
        elem = p;
        sz = a.sz;
        return *this;
    }
};