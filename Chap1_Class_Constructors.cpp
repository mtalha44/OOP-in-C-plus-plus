#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Test
{
    int id=0;
    static int r;
    char name[50];
    float marks;

public:
    Test()
    {
        r++;
        id=r;
        strcpy(name,"");
        marks=0;
    }
    Test(int i,char n[],float m)
    {
        strcpy(name,n);
        marks=m;
        id=i;
    }
    void show()
    {
        cout<<"id:\n"<<id<<endl;
        cout<<"name\n"<<name<<endl;
        cout<<"marks\n"<<marks<<endl;
    }
    void input()
    {
        cout<<"Enter name:\n";
        cin.ignore();
        cin.getline(name,50);
        cout<<"Enter marks\n";
        cin>>marks;
    }
    void set_n(char n[])
    {
        strcpy(name,n);
    }
    void set_m(float m)
    {
        marks=m;
    }
    int get_m();
    int get_i()
    {
        return id;
    }
    char* get_n()
    {
        return name;
    }
    Test(const Test & other)
    {
        id=other.id;
        strcpy(name,other.name);
        marks=other.marks;
    }
    void pluskr(Test other)
    {
        Test t;
        t.id=id+other.id;
        t.marks=marks+other.marks;
        strcpy(t.name,other.name);
        cout<<"id\n"<<id<<endl;
        cout<<"name\n"<<name<<endl;
        cout<<"marks\n"<<marks<<endl;
    }
    Test add(Test & other)
    {
        Test t;
        t.id=id+other.id;
        t.marks=marks+other.marks;
        strcpy(t.name,other.name);
        return t;
    }
};
int Test::get_m()
{
    return marks;
}
int Test::r=0;
int main()
{
    Test obj1;
    obj1.show();
    Test obj2;
    obj2.show();
    Test obj3(9,"Talha",4.56);
    obj3.show();
    Test obj4;
    obj4.set_m(34);
    char ch[50]="Bilal";
    obj4.set_n(ch);
    cout<<obj4.get_i();
    cout<<obj4.get_m();
    cout<<obj4.get_n();
    Test obj5(obj3);
    obj4.show();
    Test obj6;
    obj6=obj5.add(obj4);
    obj6.show();
    Test obj7;
    obj7.pluskr(obj1);

    return 0;
}
