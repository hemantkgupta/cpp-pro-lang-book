#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    // Data members
    string name;
    int age;

    // Member function
    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person1;
    
    // Assign values to data members
    person1.name = "John";
    person1.age = 25;

    // Call the member function
    person1.introduce();

    return 0;
}