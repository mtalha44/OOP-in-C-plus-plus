#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public:
    A()
    {
        x=y=20;
    }
    friend class B;
};
class B
{
    int a;
    int b;
public:
    B()
    {
        a=b=30;
    }
    void show(A obj)
    {
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        cout<<"x:"<<obj.x<<endl;
        cout<<"y:"<<obj.y<<endl;
    }
};
int main()
{
    A a_obj;
    B b_obj;
    b_obj.show(a_obj);
    return 0;
}
