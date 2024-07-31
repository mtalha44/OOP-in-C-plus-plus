#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    int y;
public:
    A()
    {
        x=y=5;
    }
    friend void show(A,B);
};
class B
{
    int n;
    int m;
public:
    B()
    {
        n=m=10;
    }
    friend void show(A,B);
};
void show(A a, B b)
{
    int r=a.x+a.y;
    int s=b.n+b.m;
    cout<<"r:"<<r<<endl;
    cout<<"s:"<<s<<endl;
}
int main()
{
    A obj1;
    B obj2;
    show(obj1,obj2);

    return 0;
}
