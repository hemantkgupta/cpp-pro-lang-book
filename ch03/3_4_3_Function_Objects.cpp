#include<iostream>
#include<vector>
#include<list>
using namespace std;

// Creating a Function Object
template<typename T>
class Less_than {
    const T val;                                                // value to compare against
public:
    Less_than(const T& v) : val(v) {}                           // constructor to initialize the threshold
    bool operator()(const T& x) const { return x < val; }       // function call operator
};

// Function Objects in Algorithms
template<typename C, typename P>
int count(const C& c, P pred) {
    int cnt = 0;
    for (const auto& x : c){
        if (pred(x)){
            ++cnt;
        } 
    }
    return cnt;
}

int main(){
    Less_than<int> lti {42};                                // Create a Less_than object for integers with threshold 42
    Less_than<string> lts {"Backus"};                       // For strings, compare against "Backus"

    bool b1 = lti(35);                                      // returns true, because 35 < 42
    cout << b1 << endl;                                     
    bool b2 = lts("Ada");                                   // returns true, because "Ada" < "Backus"
    cout << b2 << endl;

    vector<int> vec {1, 2, 3, 40, 50};
    list<string> lst {"Ada", "Backus", "C"};

    cout << "Values less than 42: " << count(vec, Less_than<int>{42}) << '\n';
    cout << "Values less than 'Backus': " << count(lst, Less_than<string>{"Backus"}) << '\n';

    return 0;
}