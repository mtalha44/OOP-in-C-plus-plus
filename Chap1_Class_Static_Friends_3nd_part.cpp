#include<iostream>
using namespace std;
class A
{
    static int x;
    static int y;
public:
    static void show()
    {
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y<<endl;
    }
};
int A::x=10;
int A::y=20;
class B
{
    int a;
    int b;
public:
    B()
    {
        a=b=30;
    }
    void show()
    {
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        A::show();
    }
};
int main()
{
    A ::show();
    B obj;
    obj.show();
    return 0;
}
