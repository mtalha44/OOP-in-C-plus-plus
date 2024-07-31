#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string x;
    fstream fruit;
    fruit.open("File.txt",ios ::in | ios::out);
    fruit<<"5,22,1,44,3,56,7";
    fruit.seekg(3);
    getline(fruit,x,',');
    cout<<x;
    fruit.close();

    return 0;
}
