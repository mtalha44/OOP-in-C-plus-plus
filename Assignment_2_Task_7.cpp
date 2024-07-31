#include<iostream>
#include<math.h>
using namespace std;
class IntegerCalculator
{
      int firstNo;
      int secondNo;

  public:
    inline void Input()
    {
        cout<<"Enter 1 no:"<<endl;
        cin>>firstNo;
        cout<<"Enter 2 no:"<<endl;
        cin>>secondNo;
    }
    inline void Output()
    {
        cout<<"1 no:"<<firstNo<<endl;
        cout<<"2 no:"<<secondNo<<endl;
    }
    inline int add()
    {
        return firstNo + secondNo;
    }
    inline int substract()
    {
        return firstNo - secondNo;
    }
    inline int multiply()
    {
        return firstNo * secondNo;
    }
    inline int divide()
    {
        return firstNo * secondNo;
    }
    inline int modls()
    {
        return firstNo % secondNo;
    }
    inline int power()
    {
        return pow(firstNo,secondNo);
    }
    inline int square_root()
    {
        return sqrt(secondNo);
    }
};
int main()
{
    IntegerCalculator obj1;
    obj1.Input();
    cout<<"Sum of the two numbers : "<<obj1.add()<<endl;
    cout<<"Subtraction of the two numbers : "<<obj1.substract()<<endl;
    cout<<"multiplication of the two numbers : "<<obj1.multiply()<<endl;
    cout<<"Modulus of the two numbers : "<<obj1.modls()<<endl;
    cout<<"Division of the two numbers : "<<obj1.divide()<<endl;
    return 0;
}
