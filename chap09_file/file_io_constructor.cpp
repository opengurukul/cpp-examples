#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    ofstream outfile("data.txt");
 
    outfile << "Ritu";
    outfile << endl;
 
    outfile.close();
 
    char name[20];
    ifstream infile("data.txt");
    infile >> name;
    infile.close();
 
    cout << name << endl;
    return 0;
}
