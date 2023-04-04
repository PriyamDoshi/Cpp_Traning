#include<iostream>

using namespace std;

int fact (int x)
{
    if(x ==0){
        return 1;
    }else{
        return x*fact(x-1);
    }
}

int fibonacci(int x)
{
    if(x<2){
        return 1;
    }else{
        return (fibonacci(x-2) + fibonacci(x-1));
    }
}

int main () 
{
    int a; 
    cout<<"inter a number "<<endl;
    cin>>a;

    cout << "fact of number is "<<fact(a)<<endl;
    cout << "fib of number is "<<fibonacci(a)<<endl;
    return 0;
}
