#include<iostream>

using namespace std;

//inline copy code to main function in runtime to reduce time and resorces.

inline int multi(int a, int b){
    return a*b;
}

int main (){
    int x = 4,y = 5;
    cout <<"Multiplication of x and y is "<< multi(x,y)<<endl;
    return 0;
}