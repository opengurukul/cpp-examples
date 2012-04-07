#include <iostream>
using namespace std;
 
ostream & unit(ostream & output) {
    output << " square feet ";
    return output;
}
 
ostream & my_settings(ostream & output) {
    output.setf(ios::showpos);
    output.fill('#');
    output.width(6);
    return output;
}
 
int main() {
    cout << "Super Built-up Area of House is " << my_settings << +1400 << unit << endl;
    return 0;
}
