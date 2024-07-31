#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
};
int main()
{
    Student *st = new Student;
    (*st).name = "sam";
    st->age = 20;
    cout << "name is: "<<st->name <<" age is: "<<st->age;
    return 0;
}
