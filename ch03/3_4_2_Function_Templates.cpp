#include<iostream>
#include<vector>
#include<list>
using namespace std;

// Generic sum Function
template<typename Container, typename Value>
Value sum(const Container& c, Value v) {

    for (auto x : c){
        v += x;
    }
        
    return v;
}

int main(){
    vector<int> vi{1, 2, 3, 4};
    list<double> ld{1.1, 2.2, 3.3};

    int sum_ints = sum(vi, 0);          // sum of integers
    cout << sum_ints << endl;

    double sum_doubles = sum(ld, 0.0);  // sum of doubles
     cout << sum_doubles << endl;

    return 0;
}

