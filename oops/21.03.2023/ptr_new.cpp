#include<iostream>

using namespace std;

int main ()
{
    //basic example
    int a = 10;
    int *ptr;
    ptr = &a;
    cout <<"velue at a is : "<< *ptr <<endl;

    //new operater
    
    int *p = new int(40);
    cout<<"value at p si"<<*p<<endl;

    float *f = new float(234.234);
    cout<<"value at f is :"<<*f<<endl;

    int *arr = new int[3];
    arr[0]= 1;
    *(arr+1) = 2;
    arr[2]= 3;
    
    cout<<" 0 = "<<arr[0]<<endl;
    cout<<" 1 = "<<arr[1]<<endl;
    cout<<" 2 = "<<arr[2]<<endl;

    delete[] arr;



    return 0;
}