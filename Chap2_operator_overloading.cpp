#include<iostream>
using namespace std;
class Test
{
   int x;
   int y;
   public:
       Test()
       {
           x=y=5;
       }
       void show()
       {
           cout<<"x:\n"<<x<<endl;
           cout<<"y:\n"<<y<<endl;
       }
       void operator-- ()
       {
           x=x-1;
           y=y-1;
       }
       void operator++ (int)
       {
           x=x+1;
           y=y+1;
       }
       Test operator++()
       {
           Test t;
           t.x=x+1;
           t.y=y+1;
           return t;
       }
       Test operator-- (int)
       {
           Test t;
           t.x=x+1;
           t.y=y+1;
           return t;
       }
       void operator- ()
       {
           x=-x;
           y=-y;
       }
       Test operator+ (Test obj)
       {
           Test t;
           t.x=obj.x+x;
           t.y=obj.y+y;
           return t;
       }
       Test operator- (Test obj)
       {
           Test t;
           t.x=obj.x-x;
           t.y=obj.y-y;
           return t;
       }
       Test operator* (Test obj)
       {
           Test t;
           t.x=obj.x*x;
           t.y=obj.y*y;
           return t;
       }
       Test &operator/=(Test obj)
       {

           x/=obj.x;
           y/=obj.y;
           return *this;
       }
       friend ostream &operator<< (ostream & out,Test &t);
       friend istream &operator>> (istream& out,Test &t);
};
ostream &operator<< (ostream & out,Test &t)
       {
           out<<t.x;
           out<<t.y;
           return out;
       }
istream &operator >>(istream& in,Test &t)
{
    in>>t.x;
    in>>t.y;
    return in;
}

int main()
{
    Test t1;
    t1++;
    t1.show();
    Test t2;
    -t2;
    t2.show();
    Test t3;
    t3=++t2;
    t3.show();
    Test t4;
    t4/=t3;
    t4.show();
    Test t5;
    cin>>t5;
    Test t6;
    t6=t5*t3;
    t6.show();
    Test t7;
    t7=t6--;
    t7.show();

    return 0;
}
