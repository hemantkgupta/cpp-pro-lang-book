#include<bits/stdc++.h>
using namespace std;

class FileHandler {
private:
    fstream file;

public:
    // Constructor opens the file
    FileHandler(const string& filename) {
        file.open(filename, ios::out);
        if (file.is_open()) {
            cout << "File opened successfully" << endl;
        }
    }

    // Destructor closes the file
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed successfully" << endl;
        }
    }
};

int main() {
    // 4. Resource Acquisition Is Initialization (RAII)
    // The file will be opened in the constructor and closed in the destructor
    FileHandler handler("example.txt");


    return 0;
}
