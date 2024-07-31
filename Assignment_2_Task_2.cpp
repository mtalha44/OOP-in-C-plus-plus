#include<iostream>
using namespace std;
class Shape
{
    float length;
    float width;
    float radius;

public:
       void set_length(float l)
       {
           length=l;
       }
       void set_radius(float r)
       {
           radius=r;
       }
       void set_width(float w)
       {
           width=w;
       }
       float get_length()
       {
           return length;
       }
       float get_width()
       {
           return width;
       }
       float get_radius()
       {
           return radius;
       }
       float rect_shape()
       {
           return length*width;
       }
       float sq_shape()
       {
           return length*width;
       }
       float cir_shape()
       {
           return 3.14*radius*radius;
       }

};
int main()
{
    Shape s1;
    int n;
    float l,w,r;
    cout<<"Enter number according to shape:\n1.Rectangle\n2.Circle\n3.Square\n";
    cin>>n;
    if(n==1)
    {
        cout<<"Enter length and width of rectangle:";
        cin>>l>>w;
        s1.set_length(l);
        s1.set_width(w);
        cout<<"area:";
        cout<<s1.rect_shape();
    }
    else if(n==3)
    {
        cout<<"Enter length and width of square:";
        cin>>l>>w;
        s1.set_length(l);
        s1.set_width(w);
        cout<<"area:"<<s1.sq_shape();
    }
    else if(n==2)
    {
        cout<<"Enter radius of circle:";
        cin>>r;
        s1.set_radius(r);
        cout<<"area:"<<s1.cir_shape();
    }
    else{
        cout<<"wrong output";
    }

    return 0;
}
