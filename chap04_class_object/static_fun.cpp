#include <iostream>
using namespace std;
 
class Test
 {
    static int count; // count is static
 
public:
 
    void increment() {
        count++;
    }
 
    static void display() {
        cout << "Counter : " << count << endl;
    }
 
};
 
int Test::count; // class variable count defined outside
 
int main()
 {
 
    Test a, b;
 
    a.increment();
 
    Test::display();
 
    b.increment();
 
    Test::display();
 
    return 0;
}
