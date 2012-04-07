#include <iostream>
using namespace std;
 
int main() {
    cout << "Default precision : ";
    cout << 12.1234567;
    cout << endl;
 
    cout << "Precision(3) : ";
    cout.precision(3);
    cout << 12.1234567;
    cout << endl;
 
    cout << "Precision(5) : ";
    cout.precision(5);
    cout << 12.1234567;
    cout << endl;
 
    cout << "Precision(0) : ";
    cout.precision(0);
    cout << fixed << 12.1234567;
    cout << endl;
    return 0;
}
