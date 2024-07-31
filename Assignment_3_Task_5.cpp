#include<iostream>
using namespace std;
void update(int arr [],int Size,int number,int position)
{
    if((position < Size )&& (number !=0))
    {
        arr[position]=number;
    }
    else{
        cout<<"Wrong position";
    }
}
int main()
{
    int Size;
    cout<<"Size of an array:"<<endl;
    cin>>Size;
    int arr[Size];
    cout<<"Enter an array:\n";
    for(int i=0;i<Size;i++)
    {
        cin>>arr[i];
    }

    cout<<"array:\n";
    for(int i=0;i<Size;i++)
    {
        cout<<arr[i]<<endl;;
    }

    int number;
    cout<<"\nnumber\n:";
    cin>>number;
    int position;
    cout<<"position:\n";
    cin>>position;
    update(arr,Size,number,position);

    cout<<"Update array:\n";
    for(int i=0;i<Size;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;

}
