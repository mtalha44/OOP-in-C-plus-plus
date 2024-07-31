#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Bus
{   private:

    string busNo;
    string owner;
    static int r;
    static int s;
    int capacity;
public:
    void bookBus()
    {
        r++;
        capacity=r;

    }
    void cancelBooking()
    {
        s--;
        capacity=s;

    }
    Bus()
    {
        busNo="";
        owner="";
        capacity=0;
    }
    Bus(string firstvalue,string secondvalue)
    {
      busNo=firstvalue;
      owner=secondvalue;
        capacity=0;
    }
    Bus(char* firstvalue,char* secondvalue,int thirdvalue)
    {
        busNo=firstvalue;
        owner=secondvalue;
        capacity=thirdvalue;
    }
    void setBus(char* firstvalue,char* secondvalue,int thirdvalue)
    {
       busNo=firstvalue;
        owner=secondvalue;
        capacity=thirdvalue;
    }
    void set_busNo(char* firstvalue)
    {
          busNo=firstvalue;
    }
    void set_owner(char* secondvalue)
    {
          owner=secondvalue;
    }
    void set_capacity(int thirdvalue)
    {
         capacity=thirdvalue;
    }
    string get_busNo()
    {
        return busNo;
    }
    string get_owner()
    {
        return owner;
    }
    int get_capacity()
    {
        return capacity;
    }
    void getBus()
    {
        cout<<"enter busNo:"<<endl;
        getline(cin,busNo);
        cout<<"enter Owner name:"<<endl;
        getline(cin,owner);
        cout<<"enter bus capacity:"<<endl;
        cin>>capacity;
    }
    void putBus()
    {
        cout<<"busNo:"<<endl;
        cout<<busNo;
        cout<<"owner:"<<endl;
        cout<<owner;
        cout<<"bus capacity:"<<endl;
        cout<<capacity;
    }


};
int Bus :: r=0;
int Bus :: s=0;

int main()
{
    Bus b1,b2,b3;
    b1.set_busNo("Talha");
    cout<<b1.get_busNo();
    b2.setBus("honda","hamza",5);
    b2.putBus();
    b1.bookBus();
    b2.bookBus();
    cout<<b1.get_capacity();
    cout<<b2.get_capacity();
    b2.cancelBooking();
    cout<<b2.get_capacity();
    b3.getBus();
    b3.putBus();

    return 0;
}
