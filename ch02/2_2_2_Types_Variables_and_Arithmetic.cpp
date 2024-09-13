#include<iostream>
using namespace std;



int main() {
    // 1. Declaring Variables
    int x = 10;          // Declare an integer
    double y = 5.5;      // Declare a double (floating-point number)
    char c = 'A';        // Declare a character
    bool is_true = true; // Declare a boolean


    // 2. Arithmetic Operations
    int a = 10;
    int b = 3;

    int sum = a + b;         // Addition
    int difference = a - b;  // Subtraction
    int product = a * b;     // Multiplication
    int quotient = a / b;    // Integer division
    int remainder = a % b;   // Modulus (remainder)

    double x1 = 10.5;
    double y1 = 2.5;

    double div = x1 / y1;      // Division with floating-point numbers

    // Output the results
    cout << "Integer arithmetic:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "\nFloating-point division:" << endl;
    cout << "Division result: " << div << endl;

    

    return 0;
}
