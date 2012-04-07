#include <iostream>
using namespace std;
 
class B {
public:
 
    void print_normal() {
        cout << "B::print_normal" << endl;
    }
 
    virtual void print_virtual() {
        cout << "B::print_virtual" << endl;
    }
};
 
class D : public B {
public:
 
    void print_normal() {
        cout << "D::print_normal" << endl;
    }
    /*
    void print_virtual() {
    cout << "D::print_virtual" << endl;
    }
     */
};
 
int main() {
    B b;
    D d;
 
    b.print_normal();
    b.print_virtual();
 
    d.print_normal();
    d.print_virtual();
 
    B *b_ptr;
 
    b_ptr = &b;
    b_ptr->print_normal();
    b_ptr->print_virtual();
 
    b_ptr = &d;
    b_ptr->print_normal(); //* Exception
    b_ptr->print_virtual();
    return 0;
}
