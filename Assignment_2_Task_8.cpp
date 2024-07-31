#include<iostream>
#include<cmath>
using namespace std;
int add(int firstvalue,int secondvalue)
{
    return firstvalue  +    secondvalue;
}
int sub(int firstvalue,int secondvalue)
{
    return firstvalue  -    secondvalue;
}
double add(double firstvalue,double secondvalue)
{
    return firstvalue  +    secondvalue;
}
double sub(double firstvalue,double secondvalue)
{
    return firstvalue  -    secondvalue;
}
double add(int firstvalue,double secondvalue)
{
    return firstvalue  +    secondvalue;
}
double sub(int firstvalue,double secondvalue)
{
    return firstvalue  -    secondvalue;
}
double add(double firstvalue,int secondvalue)
{
    return firstvalue  +    secondvalue;
}
double sub(double firstvalue,int secondvalue)
{
    return firstvalue  -    secondvalue;
}
int main()
{
    int option=0;
    while(true){  // while(option!=-1)
    cout<<"options:\n";
    cout<<"1.add int  + int\n";
    cout<<"2.add double  + double\n";
    cout<<"3.sub int  - int\n";
    cout<<"4.sub double  - double\n";
    cout<<"5.add int  + double\n";
    cout<<"6.sub int  - double\n";
    cout<<"7.add double  + int\n";
    cout<<"8.sub double  - int\n";
    cout<<"-1 for exit\n";
    cin>>option;
    if(option==-1)
    {
        break;
    }
    int a;
    float b;
    cin>>a>>b;
    switch(option)
    {
    case 1:
         cout<<add(a,a);
         break;
    case 2:
        cout<<add(b,b);
        break;
    case 3:
        cout<<sub(a,a);
        break;
    case 4:
        cout<<sub(b,b);
        break;
    case 5:
        cout<<add(a,b);
        break;
    case 6:
        cout<<sub(a,b);
        break;
    case 7:
        cout<<add(b,a);
        break;
    case 8:
        cout<<sub(b,a);
        break;

    default:
        cout<<"Invalid option";
        break;
    }

    }
    return 0;
}
