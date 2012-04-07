#include <iostream>
using namespace std;
 
template <class type>
type add(type in1, type in2) {
    type local;
    local = in1 + in2;
    return local;
}
 
template <class type1, class type2>
type1 subtract(type1 in1, type2 in2) {
    type1 local;
    local = in1 - in2;
    return local;
}
 
int main() {
    cout << add<int>(1, 2);
    cout << endl;
    cout << subtract<long, int>(100L, 2);
    cout << endl;
    return 0;
}
