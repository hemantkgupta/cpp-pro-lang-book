#include <iostream>
#include <string>

class Car {
private:
    string make;
    string model;
    int year;

public:
    // Constructor
    Car(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    // Member function to display car details
    void display() {
        cout << "Car: " << year << " " << make << " " << model << endl;
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Camry", 2020);
    myCar.display();

    return 0;
}