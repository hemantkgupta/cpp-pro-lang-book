#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Defining an Abstract Class
class Container {
public:
    virtual double& operator[](int) = 0;  // pure virtual function
    virtual int size() const = 0;         // pure virtual function
    virtual ~Container() {}               // virtual destructor
};

// Defining a Derived Class
class Vector_container : public Container {
    vector<double> v;
public:
    Vector_container(int s) : v(s) {}
    ~Vector_container() {}

    double& operator[](int i) { return v[i]; }  // implement access
    int size() const { return v.size(); }       // implement size
};

// Defining another Derived Class
class List_container : public Container {
    list<double> l;
public:
    List_container(initializer_list<double> il) : l(il) {}
    ~List_container() {}

    double& operator[](int i) {
        for (auto& x : l) {
            if (i == 0) return x;
            --i;
        }
        throw out_of_range("Index out of range");
    }
    int size() const { return l.size(); }
};

void use(Container& c) {
    for (int i = 0; i < c.size(); ++i)
        cout << c[i] << endl;
}

int main() {
    Vector_container vc(5);
    for (int i = 0; i < vc.size(); i++){
        vc[i] = i;
    } 

    List_container lc = { 1, 2, 3, 4, 5 };
    
    use(vc);
    use(lc);
    return 0;
}