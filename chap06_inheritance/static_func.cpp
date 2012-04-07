#include <iostream>
using namespace std;
 
class SomeClass {
public:
    static int total;
 
    SomeClass() {
        cout << "SomeClass" << endl;
        total++;
    }
};
 
class SomeDerivedClass : public SomeClass {
public:
 
    SomeDerivedClass() {
        cout << "SomeDerivedClas " << endl;
        total++;
    }
};
 
int SomeClass::total;
 
int main() {
    SomeClass A;
    SomeClass B;
    SomeDerivedClass C;
    cout << SomeClass::total << endl;
    return 0;
}
