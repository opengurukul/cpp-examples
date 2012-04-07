#include <iostream>
using namespace std;
 
int main() {
    char c;
    int number;
    char word[1024];
    cout << "Enter word or number : ";
    c = cin.peek();
    if (c >= '0' && c <= '9') {
        cin >> number;
        cout << "NUMBER : " << number << endl;
    } else {
        cin >> word;
        cout << " WORD : " << word << endl;
    }
    return 0;
}
