#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
    Box(T val) : value(val) {}

    T getValue() const {
        return value;
    }
};

int main() {
    Box<int> intBox(123);            // Box of type int
    Box<double> doubleBox(45.67);     // Box of type double

    cout << "Integer Box: " << intBox.getValue() << endl;
    cout << "Double Box: " << doubleBox.getValue() << endl;

    return 0;
}