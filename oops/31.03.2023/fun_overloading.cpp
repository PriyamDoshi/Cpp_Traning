#include<iostream>

using namespace std;

int sum (int a, int b){
    return a+b;
}

int sum (int a, int b, int c){
    return a+b+c;
}

int main ()
{
   cout<< "sum of 5 and 6 is "<< sum(5,6)<<endl;
   cout<< "sim of 1 2 3 is " << sum (1,2,3)<<endl;
   return 0;
}