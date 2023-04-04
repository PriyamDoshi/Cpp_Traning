#include<iostream>
using namespace std;

class cal{
 public:
 int a; 
 int b;

 void setval(int x, int y){
    a = x;
    b = y;
 }

 int sum(){
    return a+b;
 }

};

int cal :: sub(){
   return b - a;
}

int main ()
{
    cal xx;
    xx.setval(2,3);
    cout << " sum is "<< xx.sum()<<endl;
    return 0;

}

