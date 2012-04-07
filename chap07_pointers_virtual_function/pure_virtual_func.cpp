#include <iostream>
using namespace std;
 
class B {
public:
    virtual void display() = 0;
};
 
class D : public B {
 
    void display() {
        cout << " Hello d" << endl;
    }
};
 
int main() {
    D d;
    B *b_ptr = &d;
    b_ptr->display();
    return 0;
}
 
