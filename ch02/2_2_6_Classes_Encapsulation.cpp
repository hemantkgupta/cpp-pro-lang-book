#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Public getter function to access private member
    string getName() {
        return name;
    }

    // Public getter function to access private member
    int getAge() {
        return age;
    }

    // Public setter function to modify private member
    void setAge(int a) {
        age = a;
    }
};

int main() {
    // Create an object using the constructor
    Person person1("Alice", 30);  // Constructor initializes name and age

    // Access the private members via getter functions
    cout << person1.getName() << " is " << person1.getAge() << " years old." << endl;

    // Modify the age using the setter function
    person1.setAge(35);
    cout << "After updating age, " << person1.getName() << " is now " << person1.getAge() << " years old." << endl;


    return 0;
}