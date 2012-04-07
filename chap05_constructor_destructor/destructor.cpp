#include <iostream>
using namespace std;
 
class Test
 {
    static int count;
 
public:
 
    Test() {
        count++;
        cout << " count : " << count << endl;
    }
 
    ~Test() {
        count--;
        cout << " count : " << count << endl;
    }
 
};
 
int Test::count; // static variable has to be defined outside.
 
main()
 {
 
    Test t1, t2;
 
    {
 
        Test t3;
 
    }
 
    {
 
        Test t4;
 
    }
 
}
