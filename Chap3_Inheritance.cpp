#include<iostream>
#include<cstring>
using namespace std;
class Parent
{
    char name[50];
    int height;
public:
    Parent()
    {
        strcpy(name,"");
        height=0;
    }
    Parent(char n[],int h)
    {
       strcpy(name,n);
       height=h;
    }
    void show()
    {
        cout<<"Name:\n"<<name<<endl;
        cout<<"Height:\n"<<height<<endl;
    }
    void in();
    void display()
    {
        cout<<"Name:\n"<<name<<endl;
        cout<<"Height:\n"<<height<<endl;
    }
};
void Parent ::in()
{
    cout<<"Enter Name:\n";
    cin.getline(name,50);
    cout<<"Enter Height:\n";
    cin>>height;
}
class Child:public Parent
{
    int age;
    char work[50];
public:
    Child():Parent()
    {
        age=0;
        strcpy(work,"");
    }
    Child(int a,char w[],char n[],int h):Parent(n,h)
    {
        age=a;
        strcpy(work,w);
    }
    void show()
    {
        Parent::show();
        cout<<"age:\n"<<age<<endl;
        cout<<"Work:\n"<<work<<endl;
    }
    void in();
};
void Child::in()
{
        Parent::in();
        cout<<"Enter age:\n";
        cin>>age;
        cout<<"Enter work:\n";
        cin.ignore();
        cin.getline(work,50);
}
int main()
{
     Child c1(4,"Student","Talha",7);
     c1.show();
     Child c2;
     c2.show();
     c2.display(); //accessing Parent class member function
     Child c3;
     c3.in();
     c3.show();
     c3.display();

     return 0;
}
