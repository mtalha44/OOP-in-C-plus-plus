#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string str;
    int spaces=0;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')  //if(str.at(i)==' ')
        {
            spaces++;
        }
    }
    cout<<"spaces:"<<spaces<<"Words:"<<spaces+1<<endl;
}
