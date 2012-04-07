#include <iostream>
using namespace std;
 
class test
 {
    int a;
 
    int b;
 
public:
 
    void set() {
        a = 10;
        b = 20;
    }
 
    friend int average(test t); /* FRIEND function */
 
};
 
int average(test t)
 {
 
    return (t.a + t.b) / 2;
 
}
 
int main()
 {
 
    test T;
 
    T.set();
 
    cout << "Average : " << average(T) << endl;
 
    return 0;
 
}
