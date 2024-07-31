#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    char name[50];
    int id;
public:
    void setData(char n[],int i)
    {

        strcpy(name,n);
        id=i;
    }
    void getData()
    {
        cout<<"Name:\n";
        cout<<name<<endl;
        cout<<"id:\n";
        cout<<id<<endl;
    }
};
int main()
{
    Student *ptr = new Student[3];
    int q,i;
    char p[50];
    for(int i=0;i<3;i++)
    {

        cin.getline(p,50);
        cin>>q;
        cin.ignore();
        ptr[i].setData(p,q);
    }
    for(int i=0;i<3;i++)
    {
        ptr[i].getData();
    }

    delete[] ptr;
    return 0;
}
