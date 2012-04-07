#include <iostream>
using namespace std;
 
template <class type>
class number {
    type n1;
    type n2;
 
public:
    // this doesn't work - has some garbage values
    //number(type n1, type n2) { n1 = n1; n2 = n2;}
 
    number() {
        n1 = 2;
        n2 = 3;
    }
 
    number(type t1, type t2) {
        n1 = t1;
        n2 = t2;
    }
    type add(void);
 
    void display(void) {
        cout << n1 << " " << n2;
        cout << endl;
    }
};
 
template <class type>
type number<type> ::add() {
    return n1 + n2;
}
 
int main() {
    //class number<int> N;
    class number<int> N(5, 15);
    N.display();
    cout << N.add();
    cout << endl;
    return 0;
}
