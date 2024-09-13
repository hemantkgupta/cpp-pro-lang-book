#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable (external linkage)

void example() {
    int localVar = 10;                          // Local variable (automatic lifetime)
    static int staticVar = 0;                   // Static variable (static lifetime)
    staticVar++;                                // Increments across function calls

    cout << "Local variable: " << localVar << endl;
    cout << "Static variable: " << staticVar << endl;
}

int main() {
    // Global variable
    cout << "Global variable: " << globalVar << endl;

    // Call example function multiple times
    example();
    example();
    example();

    return 0;
}