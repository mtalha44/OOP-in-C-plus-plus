/*#include<iostream>
using namespace std;
class Complex
{
    int real,img;
public:
    void getData()
    {
        cout<<"real:\n"<<real<<endl;
        cout<<"img:\n"<<img<<endl;

    }
    void setData(int a,int b)
    {
        real=a;
        img=b;
    }
};
int main()
{
    Complex c1;
    Complex *ptr =&c1;
    (*ptr).setData(1,34);
    (*ptr).getData(); //c1.getData();
    Complex *ptr1 =new Complex;
    (*ptr1).setData(14,44);
    (*ptr1).getData();
    //(*ptr1).setData(14,44); Or ptr->setData(14,44);
    //ptr->getData();

    Complex *ptr2 =new Complex[4];
    ptr1->setData(1,44);
    ptr1->.getData();

return 0;
}
*/
#include<iostream>
using namespace std;
class Simple
{
    float a;
    float b;
public:
    void in()
    {
        cout<<"a:\n";
        cin>>a;
        cout<<"\nb:\n";
        cin>>b;
    }
    void out()
    {
        cout<<"a:\n"<<a<<endl;
        cout<<"b:\n"<<b<<endl;
    }
};
int main()
{
    Simple s1;
    s1.in();
    Simple *ptr= &s1;
    (*ptr).out();
    Simple *ptr1 =new Simple;
    ptr1->in();
    (*ptr1).out();

}
