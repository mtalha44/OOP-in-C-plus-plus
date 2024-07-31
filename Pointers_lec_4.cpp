#include<iostream>
#include<cstring>
using namespace std;
class A
{
    int id;
public:
    A & setData(float id) //if the name of data members and parameters are same then we use this keyword
    {
        this->id=id;
        return *this;
    }
    void getData()
    {
        cout<<"id:\n";
        cout<<id<<endl;
    }
};
int main()
{//this is a keyword which is a pointer which points to the object which invokes the member function
    A *ptr = new A;
      (*ptr).setData(4).getData();

    return 0;
}

