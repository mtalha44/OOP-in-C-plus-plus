#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
        A(){}
        A(int a,int b)
        {
            x=a;
            y=b;
        }
        A(const A & t)
        {
            x=t.x;
            y=t.y;

            cout<<"Copy constructor called";
        }
        A& operator =(const A &t)
        {
            x=t.x;
            y=t.y;
            cout<<"Assignment operator called";
            return *this;
        }
        void out()
        {
            cout<<x<<y;
        }
};
int main()
{
    A obj1(3,4);
    A obj2;
    obj2=obj1;
    obj2.out();

    return 0;
}
