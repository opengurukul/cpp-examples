#include <iostream>
using namespace std;
int multiply(int, int, int);
 
int add(int a, int b, int c) {
    int d = a + b + c;
    return d;
}
 
int main() {
    int x = 2, y = 4, z = 6;
    int c = add(x, y, z);
    cout << "Addition is:" << c;
    return 0;
}
