#include <iostream>
using namespace std;
 
class B {
private:
    int b_private;
protected:
    int b_protected;
public:
    int b_public;
};
 
class D : public B {
public:
 
    void setb() {
        b_protected = 10;
        b_public = 10;
    }
 
    void getb() {
        cout << " b_protected = " << b_protected << endl;
        cout << " b_public = " << b_public << endl;
    }
};
 
int main() {
    D d_obj;
    d_obj.setb();
    //d_obj.b_protected = 20;
    d_obj.b_public = 20;
    d_obj.getb();
    return 0;
}
