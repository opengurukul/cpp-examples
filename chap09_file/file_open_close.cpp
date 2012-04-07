#include <fstream>
using namespace std;
 
int main() {
    ofstream file;
 
    file.open("file.txt");
 
    file << "Hello world!\n";
 
    file.close();
 
    return 0;
}
