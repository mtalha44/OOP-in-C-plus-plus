#include<iostream>
using namespace std;
class Rational
{
    float a;
    float b;
public:
    Rational()
    {
        a=b=-1;
    }
    void set_a(float avalue)
    {
        a=avalue;
    }
    void set_b(float bvalue)
    {
        b=bvalue;
    }
    void display()
    {
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
    Rational(float avalue,float bvalue)
    {
        a=avalue;
        b=bvalue;
    }
    Rational(const Rational& other)
    {
        a=other.a;
        b=other.b;
    }
    void get_Data()
    {
        cout<<"enter a and b:"<<endl;
        cin>>a>>b;
    }
  int getEqualObjects(Rational r[], int s) {
    for (int i = 0; i < s - 1; i++) {
        if ((r[i + 1].a == r[i].a) && (r[i + 1].b == r[i].b)) {
            return i;
        }
    }
    return -1;
}
    Rational& operator/=(const Rational& other)
    {
        a/=other.a;
        b/=other.b;
        return *this;
    }
    friend ostream& operator <<(ostream& out,Rational& other)
    {
        out<<other.a;
        out<<other.b;

        return out;
    }
    Rational operator*(Rational other)
    {
        Rational temp;
        temp.a=a*other.a;
        temp.b=b*other.b;
        return temp;
    }
    bool operator-()
    {
        return (a<0||b<0);

    }
};
int main()
{
    Rational r1;
    r1.set_a(21.0);
    r1.set_b(88.1);
    r1.display();
    Rational r2;
    r2.get_Data();
    r2/=r1;
    r2.display();
    Rational r3(r2);
    r3.display();
    Rational r4=r3*r2;
    r4.display();
    Rational r5;
    r1.set_a(-21.0);
    r1.set_b(88.1);
    bool isneg=-r5;
    cout<<isneg<<endl;
    cout<<r2;
    Rational R[3];
    R[0]=r1;
    R[1]=r2;
    R[2]=r3;
    int index=r1.getEqualObjects(R,3);
    if(index!=1)
    {
     cout<<"found"<<index;
    }
    else{
      cout<<"Not found"<<index;
    }

return 0;
}
