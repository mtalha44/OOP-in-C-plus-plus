#include<iostream>
using namespace std;
int main()
{
    int Size;
    cin>>Size;
    int *ptr=new int[Size];
    for(int i=0;i<Size;i++)
    {
        cin>>ptr[i];
    }
    int sum=0;
    for(int i=0;i<Size;i++)
    {
          sum+=ptr[i];
    }
    cout<<sum;

    delete[] ptr;

    return 0;
}
