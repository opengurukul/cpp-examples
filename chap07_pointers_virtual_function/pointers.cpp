#include <iostream>
using namespace std;
 
class B {
    int b;
public:
 
    B() {
    }
 
    B(int b) {
        this->b = b;
    }
 
    void setb(int b) {
        this->b = b;
    }
 
    void display() {
        cout << " b = " << this->b << endl;
    }
};
 
int main() {
    B b_obj(5);
    b_obj.display();
    //B *b_ptr;
    //b_ptr = &b_obj;
    B *b_ptr = &b_obj;
    b_ptr->setb(10);
    b_ptr->display();
    return 0;
}
