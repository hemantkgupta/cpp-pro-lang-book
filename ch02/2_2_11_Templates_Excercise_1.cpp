#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }
};

int main() {
    Pair<int, double> p(5, 7.5);
    cout << "First: " << p.getFirst() << ", Second: " << p.getSecond() << endl;

    return 0;
}