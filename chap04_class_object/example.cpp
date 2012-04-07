#include <iostream>
using namespace std;
 
class Test
 {
    int a;
 
public:
 
    /* const func, trying to modify member variable, invalid */
 
    void set() const {
        a = 1;
    } // const func, compiler error
 
};
 
int main()
 {
 
    Test t;
 
    t.set();
 
    return 0;
 
}
