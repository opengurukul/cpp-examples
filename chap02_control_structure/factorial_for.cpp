include<iostream >
using namespace std;
 int main() {
    int i, n, fact = 1;
    cout << "\nEnter the Value of n \n";
    cin >> n;
    for (i = n; i >= 1; i--)
        fact = fact * i;
    cout << "\nFactorial => " << fact;
    return (0);
}
