#include<iostream>
using namespace std;


int main(){
    // The lambda [ ] captures no external variables.
    // The parameters (int a, int b) are explicitly provided.
    // The return type is declared as int using -> int.
    auto add = [](int a, int b) -> int { return a + b; };

    int result = add(3, 4);  // result = 7


    // 1. Capture by Value [=]
    int x = 10;
    auto printX = [=]() { cout << x << endl; };
    x = 20;
    printX();  // Outputs 10

    // 2. Capture by Reference [&]
    int x = 10;
    auto modifyX = [&]() { x += 5; };
    modifyX();
    cout << x << endl;  // Outputs 15

    // 3. Mutable Lambdas
    int x = 10;
    auto increment = [x]() mutable { x += 5; return x; };
    cout << increment() << endl;  // Outputs 15
    cout << x << endl;            // Outputs 10 (x outside is unchanged)

    // 4. Using Lambda in Algorithms
    vector<int> vec = {1, -4, 3, -2};
    sort(vec.begin(), vec.end(), [](int a, int b) {
        return abs(a) < abs(b);
    });

    for (int x : vec) {
        cout << x << " ";  // Output: 1 -2 3 -4
    }

    return 0;
}