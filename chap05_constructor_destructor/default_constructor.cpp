#include <iostream>
using namespace std;
 
class Test {
private:
    int a;
 
    Test(); // declaration of default constructor
 
    print() {
        cout << "a = " << a << endl;
    }
 
};
 
Test::Test() {
    a = 10;
}
 
int main() {
 
    Test t;
    t.print();
    return 0;
}
 
