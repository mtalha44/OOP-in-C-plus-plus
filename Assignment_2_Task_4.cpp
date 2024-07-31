#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Employee
{
    string name;
    int Id_number;
    string department;
    string position;
public:
    Employee()
    {
        name="";
        Id_number=0;
        department="";
        position="";
    }
    Employee(string n,int id,string d,string p)
    {
        name=n;
        Id_number=id;
        department=d;
        position=p;
    }
    Employee(string n,int id)
    {
        name=n;
        Id_number=id;
        department="";
        position="";
    }
    void set_Id_number(int id)
    {
        Id_number=id;
    }
     void set_position(string p)
    {
        position=p;
    }
     void set_name(string n)
    {
        name=n;
    }
     void set_department(string d)
    {
        department=d;
    }
    int  get_Id_number()
    {
        return Id_number;
    }
    string get_name()
    {
        return name;
    }
    string get_department()
    {
        return department;
    }
    string get_position()
    {
        return position;
    }
    void setInfo(string n,int id,string d,string p)
    {
        name=n;
        Id_number=id;
        department=d;
        position=p;
    }
    void getInfo()
    {
        cout<<"name:"<<endl;
        getline(cin,name);
        cout<<"Id_number:"<<endl;
        cin>>Id_number;
        cin.ignore();
        cout<<"department:"<<endl;
        getline(cin,department);
        cout<<"position:"<<endl;
        getline(cin,position);
    }
        void printInfo()
    {
        cout<<"Employee details:"<<endl;
        cout<<name<<endl;
        cout<<Id_number<<endl;
        cout<<department<<endl;
        cout<<position<<endl;
    }
         void uppercase_info()
    {
        string str;
        cout<<"Employee details:"<<endl;
        for(int i=0;i<name.length();i++)
        {
              str[i]=(toupper(name[i]));
        }
        for(int i=0;i<name.length();i++)
        {
              cout<<str[i];
        }

        /*             OR
           for (int i=0;i<name.length();i++)
        {
            putchar(toupper(name[i]));
        }

        */
        for (int i=0;i<department.length();i++)
        {
            putchar(toupper(department[i]));
        }

        for (int i=0;i<position.length();i++)
        {
            putchar(toupper(position[i]));
        }
        //cout<<name;
        cout<<"\n"<<Id_number<<endl;
    }
    ~Employee()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Employee e1,e2;
    e1.setInfo("talha",3,"bank","boss");
    e1.printInfo();
    e1.uppercase_info();
 //   e2.getInfo();
 //   e2.printInfo();

    return 0;
}
