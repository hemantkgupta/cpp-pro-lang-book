#include <iostream>
using namespace std;
// Base case for recursion
void print() {
    cout << "No more arguments" << endl;
}

// Recursive variadic template function
template <typename T, typename... Args>
void print(T first, Args... args) {
    cout << first << endl;  // Print the first argument
    print(args...);  // Recursively call with remaining arguments
}

int main() {
    print(1, 2.5, "Hello", 'A');  // Works with different types and arguments
    return 0;
}