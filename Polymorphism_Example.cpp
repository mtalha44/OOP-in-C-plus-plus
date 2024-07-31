#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
 public:
    void virtual area()=0;
};
class Circle:public Shape
{
   int radius;
   public:
       Circle(int r)
       {
           radius=r;
       }
       void area()
       {
           cout<<"Area of circle:\n"<<radius*(3.14);

       }
};
class Square:public Shape
{
       int Length;
   public:
       Square(int l)
       {
           Length=l;
       }
       void area()
       {
           cout<<"Area of Square:\n"<<Length*Length;
       }
};
class Triangle:public Shape
{
       int height;
       int base;
   public:
       Triangle(int h,int b)
       {
           height=h;
           base=b;
       }
       void area()
       {
           cout<<"Area of Triangle:\n"<<(height*base)/2;
       }
};
int main()
{
    Shape* s1;
    Circle c1(3);
    s1=&c1;
    s1->area();

    return 0;
}

