#include <fstream>
using namespace std;

main()
{
	ofstream ofs("files_tellp_seekp.out");
	ofs << "Hello "; 
	ofstream::pos_type p = ofs.tellp(); 
	ofs << "Files\n"; 
	ofs.seekp(p); 
	ofs << "World\n"; 
	ofs.close();
}


