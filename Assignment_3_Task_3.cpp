#include<iostream>
using namespace std;
class Container
{
    int length;
    int *breadth = new int;
    int height;
public:
    Container(int l,int b,int h)
    {
        length=l;
        *breadth=b;
        height=h;
    }

    ~Container()
    {
        cout<<"Destructor executed"<<endl;
    }

  /*  Container(const Container & other)
    {
        height=other.height;
        *breadth=*(other.breadth);
        length=other.length;
    }
*/    void set_dimensions(int l,int b,int h)
    {
        length=l;
        *breadth=b;
        height=h;
    }
    void show()
    {
        cout<<"length:\n"<<length<<endl;
        cout<<"breadth:\n"<<*breadth<<endl;
        cout<<"height:\n"<<height<<endl;
        cout<<"breadth address:\n"<<breadth<<endl;
    }
};
int main()
{
    Container c1(12, 14, 16);
    Container c2(c1);
    c1.show();
    c2.show();
    return 0;
}

