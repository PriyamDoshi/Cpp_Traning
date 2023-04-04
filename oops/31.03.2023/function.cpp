#include<iostream>
#include<pthread.h>

using namespace std;

void swap(int *a, int *b){
    cout<<" add of a is "<< a<< endl;
    int tamp = *a;
    *a = *b;
    *b = tamp;
}

// Call by refreance using c++ refrance veriable

void swapRefranceVar(int &a, int &b){
   int temp = a;
   a = b;
   b = temp;
}

int main ()
{
    int a = 9 , b = 6;

    swap(&a, &b);
    cout<< " a = "<< a<< endl;
    cout<< " b = "<< b<< endl;

    // using refrance veriable

    swapRefranceVar(a,b);
    cout<< " a = "<< a<< endl;
    cout<< " b = "<< b<< endl;

    

    return 0;

}