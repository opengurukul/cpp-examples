#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    char c;
    ofstream ofs("files_put_get.txt");
 
    do {
        c = cin.get();
        ofs.put(c);
    } while (c != '!');
 
    ofs.close();
 
    return 0;
}
