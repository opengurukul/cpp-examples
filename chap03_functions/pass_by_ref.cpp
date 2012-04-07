#include<iostream>
 
using namespace std;
 
int add(int &number);
 
int main()
 {
 
    int number;
 
    int result;
 
    number = 5;
 
    cout << "The value of the variable number before calling the function : " << number << endl;
 
    result = add(&number);
 
    cout << "The value of the variable number after the function is returned : " << number << endl;
 
    cout << "The value of result : " << result << endl;
 
    return 0;
 
}
 
int add(int &p)
 {
 
    *p = *p + 100;
 
    return *p;
 
}
