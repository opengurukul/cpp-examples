#include <iostream>
using namespace std;
 
class Test {
private:
    int a;
 
public:
 
    Test() {
    } // default constructor
 
    Test(int arg) {
        a = arg;
    } // parameterized constructor
 
    Test(Test & t) // copy constructor
    {
        a = t.a;
    }
 
    print() {
        cout << "a = " << a << endl;
    }
 
};
 
int main() {
    Test t1(2); // initialize a to 2
    Test t2(t1); // copy t2 from t1 using copy constructor
    Test t3 = t2; // copy t3 from t2 using copy constructor
    Test t4;
    t4 = t3; // this uses overloaded assignment operator
    t4.print();
    return 0;
}
