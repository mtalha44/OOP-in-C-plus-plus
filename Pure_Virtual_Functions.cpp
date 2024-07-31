#include<iostream>
#include<cstring>
using namespace std;
class App
{
protected:
    int cost;
    char name[50];
public:
    App(char c[],int i)
    {
        cost=i;
        strcpy(name,c);
    }
    void virtual show()=0;
};
class Web:public App
{
    protected:
       char title[50];
   public:
    Web(char c[],int i,char t[]):App(c,i)
    {
        strcpy(title,t);
    }
    void show()
    {
        cout<<"Name of Web:\n";
        cout<<name;
        cout<<"\nTotal Cost of App:\n";
        cout<<cost;
        cout<<"\nTitle of App:\n";
        cout<<title<<endl;
    }
};
class Phy:public Web
{
    protected:
   float time;
   public:
    Phy(char n[],int c,char t[],float tm):Web(n,c,t)
    {
                time=tm;
    }
    void show()
    {
        cout<<"Name of Phy:\n"<<name<<"\nTotal Cost of Web:\n"<<cost<<"\nTitle of Phy:\n"<<title<<"\nTime:"<<time<<endl;
    }
};
int main()
{
    Phy obj("Cyberonicz",345,"Course",23);
    Web obj1("Moviesmod",545,"Enternship");
    /*App *ptr1;
    ptr1=&obj;
    ptr1->show(); */

    App *ptr[2];
    ptr[0]=&obj;
    ptr[0]->show();
    ptr[1]=&obj1;
    ptr[1]->show();

    return 0;
}


