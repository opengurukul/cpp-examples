#include <iostream>
using namespace std;
 
class X {
    int a, b;
    friend class F;
public:
 
    X() : a(1), b(2) {
    }
};
 
class F {
public:
 
    void print(X& x) {
        cout << "a is " << x.a << endl;
        cout << "b is " << x.b << endl;
    }
};
 
int main() {
    X xobj;
    F fobj;
    fobj.print(xobj);
    return 0;
}
