#include<iostream>
#include<string>
using namespace std;
class Vehicle
{
    string company;
    string fuelType;
    int yearOfManufacture;
    string yearOfPurchase;
    string color;
    int engineCapacity;

public:
    Vehicle()
    {
        //cout<<"“Default Constructor of Vehicle is called\n";
        company=fuelType=yearOfPurchase=color="";
        yearOfManufacture=engineCapacity=0;
    }
    void set_company(string ch)
    {
        company=ch;
    }
    void set_fuelType(string f)
    {
        fuelType=f;
    }
    void set_yearOfPurchase(string yOp)
    {
        yearOfPurchase=yOp;
    }
    void set_color(string c)
    {
        color=c;
    }
    void set_yearOfManufacture(int yOm)
    {
        yearOfManufacture=yOm;
    }
    void set_engineCapacity(int eC)
    {
        engineCapacity=eC;
    }
    int get_yearOfManufacture()
    {
        return yearOfManufacture;
    }
    int get_engineCapacity()
    {
        return engineCapacity;
    }
    string get_company()
    {
        return company;
    }
    string get_fuelType()
    {
        return fuelType;
    }
    string get_yearOfPurchase()
    {
        return yearOfPurchase;
    }
    string get_color()
    {
        return color;
    }
    void inputDetails()
    {
        cout<<"yearOfManufacture:"<<endl;
        cin>>yearOfManufacture;
        cout<<"engineCapacity:"<<endl;
        cin>>engineCapacity;
        cin.ignore();
        cout<<"fuelType:"<<endl;
        getline(cin,fuelType);
        cout<<"yearOfPurchase:"<<endl;
        getline(cin,yearOfPurchase);
        cout<<"color:"<<endl;
        getline(cin,color);
        cout<<"Company:"<<endl;
        getline(cin,company);
    }
    void displayDetails()
    {

        cout<<"Vehicle details:"<<endl;
        cout<<company<<endl;
        cout<<yearOfManufacture<<endl;
        cout<<engineCapacity<<endl;
        cout<<fuelType<<endl;
        cout<<yearOfPurchase<<endl;
        cout<<color<<endl;
    }
    void isOld()
    {
        if(yearOfManufacture==stoi(yearOfPurchase)
        {
            cout<<"vehicle is purchased in the same year as it is manufactures";
        }
        else{
            cout<<"old"<<endl;
            cout<<stoi(yearOfPurchase)-yearOfManufacture;
        }
    }
    ~Vehicle()
    {
        cout<<"Destructor called"<<endl;
    }

};

int main()
{
    Vehicle v1;
   // v1.set_company("Talha");
   // cout<<v1.get_company();
    v1.inputDetails();
    v1.displayDetails();
    v1.isOld();

}
