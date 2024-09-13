#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Division by zero");  // Throw an exception if b is zero
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10, 0);                 // This will throw an exception
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;      // Catch and handle the exception
    }

    return 0;
}