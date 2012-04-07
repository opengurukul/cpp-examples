#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    char name[1024];
    cout << "Enter your full name : ";
    cin.getline(name, 1024);
    cout << "You have typed " << cin.gcount() - 1 << " chars\n";
    return 0;
}
