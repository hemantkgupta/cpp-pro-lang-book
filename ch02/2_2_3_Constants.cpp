#include <iostream>
using namespace std;

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

// Function that can be evaluated at compile time
constexpr int cube(int x) {
    return x * x * x;
}

int main() {
    const int max_value = 100;                              // Constant integer
    
    constexpr int base_value = 5;                           // Constant expression, evaluated at compile time
    constexpr int cube_value = cube(base_value);            // cube(5) is evaluated at compile time

    cout << "Max value: " << max_value << endl;
    cout << "Base value: " << base_value << endl;
    cout << "Cube of base value: " << cube_value << endl;

    // Uncommenting the line below would cause a compilation error
    // max_value = 200;  // Error: You cannot modify a const variable

    const int num = 5;
    constexpr int fact = factorial(5);                      // This will be evaluated at compile time

    cout << "Factorial of " << num << " is: " << fact << endl;


    return 0;
}

