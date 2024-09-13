#include <iostream>
#include <exception>
using namespace std;


class MyCustomException : public exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred!";
    }
};

int main() {
    try {
        throw MyCustomException();              // Throw custom exception
    } catch (const MyCustomException& e) {
        cout << e.what() << endl;               // Catch and handle custom exception
    }

    return 0;
}