#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{

/*
    ofstream out;
    out.open("Sample.txt");
    out<<"Talha Bilal Hamza";

    out.close();
    */

    ifstream in;
    in.open("Sample.txt");
    string str;
    while(in.eof() == 0)
    {
        getline(in,str);
        cout<<str;
    }
    //cout<<str;
    return 0;
}

