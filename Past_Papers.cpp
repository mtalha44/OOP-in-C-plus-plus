#include<iostream>
using namespace std;

int  main()
{
    int a=4;
    int* ptr=&a;

   cout<<"Value at address p:"<<*ptr<<endl;
   cout<<"address of a:"<<ptr<<endl;
   int *p=new int(3);
   cout<<"Value at address p:"<<*p<<endl;
   int *arr =new int[3];
   arr[0]=2;
   *(arr + 1)=12;
   arr[2]=20;
//   delete[] arr; //delete the dynamic allocated array
   cout<<"a[0]:"<<arr [0]<<endl;
   cout<<"a[1]:"<<arr[1]<<endl;
   cout<<"a[2]:"<<arr[2]<<endl;

   //delete operator
    return 0;
}

