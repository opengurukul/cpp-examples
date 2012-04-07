#include <iostream>
using namespace std;
 
int main() {
    char city[50];
    cout << "City Name : ";
    // cin >> city ;
    cin.getline(city, 50);
    cout << "City Name : " << city << endl;
    return 0;
}
