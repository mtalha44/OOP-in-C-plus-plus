/*
#include<iostream>
#include<string>

using namespace std;
bool check(const string &str)
{
    int sum=0;
    for(int i=0;i<str.length();i++)
    {
        if(isalpha(str.at(i)))
        {
            if(str.at(i) >= 'A' && str.at(i) <= 'Z'){
            sum+=str.at(i) - 'A' +1;
            }
            if(str.at(i) >= 'a' && str.at(i) <= 'z'){
            sum+=str.at(i) - 'a' +1;
            }
        }
    }
    int n;
    n=str.length();
    int exp=(n*(n+1))/2;

    return sum==exp;

}
int main()
{
    string str;
    getline(cin,str);
    bool result=check(str);
    if(result)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
*/
#include<iostream>
#include<string>

using namespace std;
bool check(const string &str)
{
    int sum=0;
    for(int i=0;i<str.length();i++)
    {
        if(isalpha(str.at(i)))
        {
            sum+=toupper(str.at(i)) - 'A' +1;
        }
    }
    int n;
    n=str.length();
    int exp=(n*(n+1))/2;

    return sum==exp;

}
int main()
{
    string str;
    getline(cin,str);
    bool result=check(str);
    if(result)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}

