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
        void Set_x(int a)
        {
            x=a;
        }
        void Set_y(int b)
        {
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
    obj2.Set_x(9);  // Any change in obj2 doesn't make any change in obj3;
    obj2.out();
    //obj1.out();
    A &obj3=obj2;
    obj3.out();
    obj2.Set_x(8); // Any changes in obj2 also make a change in obj3.
    obj2.Set_y(0);
    obj3.out();

    return 0;
}
