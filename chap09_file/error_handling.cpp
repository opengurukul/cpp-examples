#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    char ch;
    ifstream ifs("eof_test.txt");
 
    while (1) {
        ifs >> ch;
        if (ifs.eof()) break;
        cout << ch;
    }
    ifs.close();
    return 0;
}
