#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public:
    A(){}
    A(int xvalue,int yvalue)
    {
        x=xvalue;
        y=yvalue;
    }
    void in()
    {
        cout<<"Enter two numbers:\n";
        cin>>x>>y;
    }
    void show()
    {
        cout<<"x:\n"<<x<<"\ny:"<<y<<endl;
    }
};
int main()
{
  /*  A obj;
    A *A_class_pointer=&obj;
    A_class_pointer->in();
    A_class_pointer->show();
       A *cls_ptr;
       cls_ptr=(&obj);
       //obj.in();
       cls_ptr->in();
       cls_ptr->show();
   A *cls_ptr1[4];
   for(int i=0;i<4;i++)
   {
       cls_ptr1[i]=new A;
   }
   for(int i=0;i<4;i++)
   {
       cls_ptr1[i]->in();
   }
   for(int i=0;i<4;i++)
   {
       cls_ptr1[i]->show();
   } */
   A obj1(4,3);
   A *ptr=&obj1;
   //ptr->show();
   obj1.show();
return 0;
}
