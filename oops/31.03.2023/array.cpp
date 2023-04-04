#include<iostream>

using namespace std;

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout <<"inter "<<i<< " number of elemrnt"<<endl;
        cin>>a[i];
    }
    cout<< "element of array is"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< a[i]<<" ";
    }

    cout<<"address of first elemrnt of array is"<<a<<endl;
    cout<<"address of second elemrnt of array is"<<a+1<<endl;
    cout<<"address of third elemrnt of array is"<<a+2<<endl;
    cout<<"address of first elemrnt of array is"<<*a<<endl;
    
    return 0;
}