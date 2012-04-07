#include <fstream>
#include <iostream>
using namespace std;
 
int main() {
    int marks[5] = {10, 20, 30, 40, 50};
    ofstream ofs("marks.txt");
    ofs.write((char *) & marks, sizeof (marks));
    ofs.close();
 
    for (int i = 0; i < 5; i++) {
        marks[i] = 0;
    }
 
    ifstream ifs("marks.txt");
    ifs.read((char *) & marks, sizeof (marks));
    ifs.close();
    for (int i = 0; i < 5; i++) {
        cout << "marks[" << i << "] = " << marks[i] << endl;
    }
    return 0;
}
