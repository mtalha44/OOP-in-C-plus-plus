#include<iostream>
using namespace std;
int main()
{
    int *id=new int[10000];
    for(int i=0;i<10000;i++)
    {
       id[i]=5;
    }

    delete [] id;

return 0;
}

