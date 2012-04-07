#include<iostream>

using namespace std;

int add(int n);

int main() {

    int number, result;
    number = 5;
    cout << " The initial value of number : " << number << endl;
    result = add(number);
    cout << " The final value of number : " << number << endl;
    cout << " The result is : " << result << endl;
    return 0;
}

int add(int number) {
    number = number + 100;
    return number;
}
