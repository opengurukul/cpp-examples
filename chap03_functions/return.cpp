#include <iostream>
using namespace std;
int multiply(int, int, int);
 
int multiply(int a, int b, int c) {
    int d = a * b*c;
    return d;
}
 
int main() {
    int x = 1, y = 3, z = 7;
    int c = multiply(x, y, z);
    cout << "Multiplication is:" << c;
    return 0;
}
 
