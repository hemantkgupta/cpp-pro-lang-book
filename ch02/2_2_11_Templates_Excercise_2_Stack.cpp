#include<iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    void push(const T& element) {
        elements.push_back(element);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        }
    }

    T top() const {
        if (!elements.empty()) {
            return elements.back();
        }
        throw out_of_range("Stack is empty");
    }

    bool isEmpty() const {
        return elements.empty();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    cout << "Top of intStack: " << intStack.top() << endl;

    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    cout << "Top of stringStack: " << stringStack.top() << endl;

    return 0;
}