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
};
void Parent ::in()
{
    cout<<"Enter Name:\n";
    cin.getline(name,50);
    cout<<"Enter Height:\n";
    cin>>height;
}
class Child
{
    int age;
    char work[50];
public:
    Child()
    {
        age=0;
        strcpy(work,"");
    }
    Child(int a,char w[])
    {
        age=a;
        strcpy(work,w);
    }
    void show()
    {
        cout<<"age:\n"<<age<<endl;
        cout<<"Work:\n"<<work<<endl;
    }
    void in();
};
void Child ::in()
{
        cout<<"Enter age:\n";
        cin>>age;
        cout<<"Enter work:\n";
        cin.ignore();
        cin.getline(work,50);
}
class GChild:public Parent,public Child
{
    double car;
public:
    GChild():Parent(),Child()
    {
      car=0;
    }
    GChild(int a,char w[],char n[],int h,double c):Parent(n,h),Child(a,w)
    {

    car=c;

    }
    void show()
    {
       Parent::show();
       Child::show();
       cout<<"car:\n"<<car<<endl;
    }
    void in();
};

void GChild::in()
{
    Parent::in();
    Child::in();
    cout<<"car engine capacity:";
    cin>>car;
}
int main()
{
     GChild c1;
     c1.in();
     c1.show();
     GChild c2(3,"Paint","Talha",34,3.4);
     c2.show();
     return 0;
}

