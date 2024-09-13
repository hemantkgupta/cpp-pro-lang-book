#include <iostream>
#include <utility>  // For move
using namespace std;

class Array {
private:
    int* data;
    int size;

public:
    // Constructor
    Array(int s) : size(s) {
        data = new int[s];
        cout << "Array created with size " << size << endl;
    }

    // Destructor
    ~Array() {
        delete[] data;
        cout << "Array destroyed" << endl;
    }

    // Move Constructor
    Array(Array&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;  // Leave the source object in a valid but empty state
        other.size = 0;
        cout << "Array moved" << endl;
    }

    // Move Assignment Operator
    Array& operator=(Array&& other) noexcept {
        if (this != &other) {
            delete[] data;  // Clean up existing data

            // Transfer ownership of the resources
            data = other.data;
            size = other.size;

            // Leave the source object in a valid but empty state
            other.data = nullptr;
            other.size = 0;

            cout << "Array moved via assignment" << endl;
        }
        return *this;
    }

    // Function to display the contents of the array
    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array arr1(5);               // Create an array
    Array arr2 = move(arr1); // Move arr1 into arr2 using the move constructor

    Array arr3(3);                // Create another array
    arr3 = move(arr2);       // Move arr2 into arr3 using the move assignment operator

    return 0;
}