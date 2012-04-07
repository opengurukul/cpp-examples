#include <iostream>
using namespace std;
 
int main() {
    cout << "Right Justified - Default with width" << endl;
    cout.fill('#');
    cout.width(5);
    cout << 12 << endl;
 
    cout << "Left Justified" << endl;
    cout.setf(ios::left, ios::adjustfield);
    cout.width(5);
    cout << 12 << endl;
 
    cout << "Internal Adjusted (padding after sign or base indicator)" << endl;
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(5);
    cout << -12 << endl;
 
    cout << "Internal Adjusted (padding after sign or base indicator)" << endl;
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::hex, ios::basefield);
    cout.setf(ios::showbase);
    cout.width(5);
    cout << 12 << endl;
 
    cout << "Internal Adjusted (padding after sign or base indicator)" << endl;
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::oct, ios::basefield);
    cout.setf(ios::showbase);
    cout.width(5);
    cout << 12 << endl;
 
    cout << "fixed (from scientific) : " << endl;
    cout << fixed << 1345e-02 << endl;
    cout << "scientific (from fixed) : " << endl;
    cout << scientific << 1.234 << endl;
 
    cout << "Upper case hexa decimal character" << endl;
    cout.setf(ios::hex, ios::basefield);
    cout.setf(ios::showbase);
    cout.setf(ios::uppercase);
    cout << 12 << endl;
 
    cout << "Show positivie sign also" << endl;
    cout.setf(ios::dec, ios::basefield);
    cout.setf(ios::showpos);
    cout << +12 << endl;
    return 0;
}
