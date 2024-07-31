#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public:
    A(){}
    void in()
    {
        cout<<"Enter two numbers(Parent class):\n";
        cin>>x>>y;
    }
    void show()
    {
        cout<<"x:\n"<<x<<"\ny:"<<y<<endl;
    }
};
class B:public A
{
       int a,b;
   public:
    B(){}
    void in()
    {
        cout<<"Enter two numbers(Child Class):\n";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"a:\n"<<a<<"\nb:"<<b<<endl;
    }
};
int main()
{
    A *P_ptr;
    A obj_P;
    B obj_C;
    P_ptr=&obj_C;
    P_ptr->in();
    P_ptr->show();
    obj_P.in();
    obj_P.show();
    obj_C.in();
    obj_C.show();

    return 0;
}
