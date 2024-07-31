#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
public:
    void virtual in()
    {
        cout<<"Enter two numbers(Parent class):\n";
        cin>>x>>y;
    }
    void virtual show()
    {
        cout<<"x:\n"<<x<<"\ny:"<<y<<endl;
    }
    void virtual Set_xValue(int xValue)
    {
        x=xValue;
    }
    void virtual Set_yValue(int yValue)
    {
        y=yValue;
    }
    int virtualget_xValue()
    {
        return x;
    }
    int virtual get_yValue()
    {
        return y;
    }
};
class B:public A
{
       int a,b;
   public:
    void in()
    {
        cout<<"Enter two numbers(Child Class):\n";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"a:\n"<<a<<"\nb:"<<b<<endl;
    }
    void Set_xValue(int xValue)
    {
        a=xValue;
    }
    void Set_yValue(int yValue)
    {
        b=yValue;
    }
    int get_xValue()
    {
        return a;
    }
    int get_yValue()
    {
        return b;
    }
};
int main()
{
    A *P_ptr;
    A obj_P;
    B obj_C;
    P_ptr=&obj_C;
    P_ptr->Set_xValue(5);
    P_ptr->Set_yValue(15);
    P_ptr->show();

    return 0;
}

