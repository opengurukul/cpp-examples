#include <iostream>
using namespace std;
 
int main() {
    cout.width(5);
    cout << 543 << 21 << endl;
    cout.width(5);
    cout << 543;
    cout.width(5);
    cout << 21 << endl;
    return 0;
}
 
