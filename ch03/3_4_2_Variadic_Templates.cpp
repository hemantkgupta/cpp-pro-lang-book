#include<iostream>
using namespace std;

// Variadic Template for Function Calls
template<typename T, typename... Args>
void print(T head, Args... rest) {
    cout << head << " ";                        // Process the first argument
    if constexpr (sizeof...(rest) > 0){         // Recursively process the rest
        print(rest...);
    }
}

// Variadic Template for Function Forwarding
template<typename F, typename... Args>
void call(F&& func, Args&&... args) {
    func(forward<Args>(args)...);
}

void greet(const std::string& name) {
    cout << "Hello, " << name << "!\n";
}


int main() {
    print(1, 2.2, "hello", 'c');

    call(greet, "Alice");  // Calls greet("Alice")

    return 0;
}


