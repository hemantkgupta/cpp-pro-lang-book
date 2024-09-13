#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    // Data members
    string name;
    int age;

    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Member function
    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    // Create an object using the constructor
    Person person2("Alice", 30);  // Constructor initializes name and age

    // Call the member function
    person2.introduce();

    return 0;
}