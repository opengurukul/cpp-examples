#include <iostream>
using namespace std;
 
int main() {
    int n, a, fact = 1;
 
    cout"Enter the number ";
    cin >> n;
 
    while (n != 0) {
        fact = fact*n;
        n = n - 1;
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;
}
