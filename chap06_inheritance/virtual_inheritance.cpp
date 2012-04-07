#include <iostream>
using namespace std;
 
class B {
public:
    int roll_number;
 
    B() {
    }
 
    B(int i) : roll_number(i) {
    }
 
    void display() {
        cout << "roll_number = " << roll_number << endl;
    }
};
 
class B1 : virtual public B {
};
 
class B2 : virtual public B {
};
 
class D : public B1, public B2 {
public:
 
    D() {
    }
 
    D(int i) : B(i) {
    }
 
    void display() {
        cout << "ritu, roll_number = " << roll_number << endl;
    }
};
 
int main() {
    D d_obj(100);
    // d_obj.roll_number = 10;
    d_obj.display();
    return 0;
}
