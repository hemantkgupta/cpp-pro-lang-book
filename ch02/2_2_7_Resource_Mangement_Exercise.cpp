#include<iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int size;

public:
    // Constructor allocates memory
    DynamicArray(int s) : size(s) {
        data = new int[size];
        cout << "Array of size " << size << " created." << endl;
    }

    // Destructor deallocates memory
    ~DynamicArray() {
        delete[] data;
        cout << "Array destroyed." << endl;
    }
};

int main() {
    DynamicArray arr(5);
    return 0;
}