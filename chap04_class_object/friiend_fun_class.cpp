#include <iostream>
using namespace std;
 
class High
 
{
 
    int h;
 
    public:
 
    void set(int i) {
        h = i;
    }
 
    friend int average(High, Low);
 
};
 
class Low
 
{
 
    int l;
 
    public:
 
    void set(int i) {
        l = i;
    }
 
    friend int average(High, Low);
 
};
 
int average(High high, Low low)
 {
 
    return (high.h + low.l) / 2;
 
}
 
int main()
 {
 
    High high;
 
    Low low;
 
    high.set(100);
 
    low.set(10);
 
    cout << "average : " << average(high, low) << endl;
 
    return 0;
 
}
