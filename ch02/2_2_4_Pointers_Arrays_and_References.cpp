#include <iostream>
using namespace std;

// Write a program that declares an integer variable, a pointer to the variable, 
// and modifies the value of the variable using the pointer.
void exercise1{
    int a = 5;
    int* ptr = &a;
    
    // Modifying the value using the pointer
    *ptr = 10;
    std::cout << "Modified value of a: " << a << std::endl;

}

// Write a program that declares an array of 5 integers and 
// uses a pointer to iterate through the array and print its elements.
void exercise2(){
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr;  // Pointer to the first element of the array
    
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *(p + i) << std::endl;
    }
}

// Write a program that demonstrates how modifying a reference also modifies the original variable.
void exercise3(){
    int z = 15;
    int& ref = z;  // Reference to z

    std::cout << "Original value of z: " << z << std::endl;
    ref = 25;  // Modify the reference
    std::cout << "Modified value of z: " << z << std::endl;
}



int main() {
    // 1. Pointers
    int x = 10;
    int* ptr = &x;  // Pointer to x
    cout << "Pointer address: " << ptr << endl;
    cout << "Pointer address: " << &x << endl;
    cout << "Pointer points to value: " << *ptr << endl;        // Dereferencing the pointer
    
    // 2. Arrays
    int arr[5] = {1, 2, 3, 4, 5};                               // Array of 5 integers
    cout << "First element of array: " << arr[0] << endl;
    cout << "Third element of array: " << arr[2] << endl;
    
    // Accessing array using a pointer
    int* p = arr;                                               // p points to the first element of the array
    cout << "Pointer points to first element of array: " << *p << endl;
    
    // 3. References
    int y = 20;
    int& ref = y;                                               // Reference to y
    cout << "Reference to y: " << ref << endl;
    
    // Modifying the reference modifies the original variable
    ref = 30;
    cout << "Modified value of y through reference: " << y << endl;

    exercise1();

    
    return 0;
}