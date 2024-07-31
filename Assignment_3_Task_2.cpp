#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;
public:
    Distance()
    {

    }
    void input()
    {
        cout<<"Feet ";
        cin>>feet;
        cout<<"inches ";
        cin>>inches;
    }
     void output()
    {
        cout<<"Feet ";
        cout<<feet;
        cout<<"\ninches ";
        cout<<inches;
        cout<<"\naddresses:\n";
        cout<<"Feet ";
        cout<<&feet;
        cout<<"\ninches ";
        cout<<&inches;

    }
};
int main()
{
    Distance obj1;
    obj1.input();
    cout<<"Obj1:\n";
    obj1.output();
    Distance obj2;
    obj2=obj1;
    cout<<"\nObj2:\n";
    obj2.output();
}
