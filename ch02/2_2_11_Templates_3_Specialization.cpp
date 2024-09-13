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

// Specialization for char
template <>
class Box<char> {
private:
    char value;

public:
    Box(char val) : value(val) {}

    void printValue() const {
        cout << "Character: " << value << endl;
    }
};

int main() {
    Box<int> intBox(123);
    Box<char> charBox('A');

    cout << "Integer Box: " << intBox.getValue() << endl;
    charBox.printValue();  // Specialized behavior for char

    return 0;
}