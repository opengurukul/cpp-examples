#include <iostream>
#include <cstring>
 
using namespace std;
 
class Employee {
private:
    int e_id;
    int e_age;
    char e_name[255];
 
public:
    // Default Constructor
 
    Employee() {
        e_id = 0;
        e_age = 0;
        strcpy(e_name, "");
    }
    Employee(int id, int age, char *name);
    Employee(Employee & e);
 
    void Display();
    void Display(Employee e);
};
 
 
// Parametrised Constructor
 
Employee::Employee(int id, int age, char *name) {
    e_id = id;
    e_age = age;
    strcpy(e_name, name);
}
 
// Copy Constructor
 
Employee::Employee(Employee & e) {
    e_id = e.e_id;
    e_age = e.e_age;
    strcpy(e_name, e.e_name);
 
    cout << "copy constructor called" << endl;
}
 
void Employee::Display() {
    cout << "e_id = " << e_id << ", e_age = " << e_age << ", e_name = " << e_name << endl;
}
 
void Employee::Display(Employee e) {
    cout << "copy interface" << endl;
 
    cout << "e_id = " << e.e_id << ", e_age = " << e.e_age << ", e_name = " << e.e_name << endl;
}
 
int main() {
    Employee ed;
    ed.Display();
 
    Employee ep(1, 30, (char *) "a");
    ep.Display();
 
    Employee ec1 = ed;
    ec1.Display();
 
    Employee ec2(ep);
    ec2.Display();
 
    ec1.Display(ep);
    return 0;
}
