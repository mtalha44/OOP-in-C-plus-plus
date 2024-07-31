#include<iostream>
using namespace std;
class Set
{
    int num[5];
public:
    Set()
    {

    }
    void setElements()
    {
     cout<<"Enter an array element:\n";
     for(int i=0;i<5;i++)
     {
         cin>>num[i];
     }

    }
    void display()
    {
     cout<<"array element:\n";
     for(int i=0;i<5;i++)
     {
         cout<<"num:"<<num[i]<<endl;
         cout<<"num Address"<<&num[i]<<endl;
     }

    }
    Set(const Set & other)
    {
        for(int i=0;i<5;i++)
        {
            num[i]=other.num[i];
        }
    }
   Set operator++() {
        Set temp;
        for (int i = 0; i < 5; i++) {
            temp.num[i] = num[i] + 1;
        }
        return temp;
    }

};
int main()
{
    Set s1;
    s1.setElements();

    Set s2 = ++s1;
    s1.display();
    s2.display();
}

