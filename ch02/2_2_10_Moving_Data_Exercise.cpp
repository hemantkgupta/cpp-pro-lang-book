#include<iostream>
#include<utility>
#include<cstring>
using namespace std;

class String {
private:
    char* data;
    size_t length;

public:
    String(const char* str) {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }

    // Move constructor
    String(String&& other) noexcept : data(other.data), length(other.length) {
        other.data = nullptr;
        other.length = 0;
    }

    // Move assignment operator
    String& operator=(String&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            length = other.length;
            other.data = nullptr;
            other.length = 0;
        }
        return *this;
    }

    // Destructor
    ~String() {
        delete[] data;
    }

    void print() const {
        if (data) {
            cout << data << endl;
        } else {
            cout << "Empty string" << endl;
        }
    }
};