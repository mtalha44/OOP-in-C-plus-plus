#include<iostream>
using namespace std;
class Demo{
public:
    Demo* FUNC1(){
        cout<<1;
        return this;
    }
    Demo* FUNC2(){
        cout<<2;
        return this;
    }
    Demo* FUNC3(){
        cout<<3;
        return this;
    }
};
int main()
{
    Demo ob;
    ob.FUNC1()->FUNC2()->FUNC3();
    return 0;
}
