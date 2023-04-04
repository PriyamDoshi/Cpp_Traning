#include <iostream>

using namespace std;

class complex 
{
int a,b;
public:
    void setnum(int x, int y){
        a = x;
        b = y;
    }
    friend complex sumcom (complex , complex);
    void printnum(){
        cout<<"the number is "<<a<<" + "<< b<<"i"<<endl;
    }

};

complex sumcom(complex o1, complex o2){
    complex o3;
    o3.setnum(o1.a + o2.a ,  o1.b + o2.b);
    return o3 ;
}

int main (){

    complex c1, c2 , sum;

    c1.setnum(3,4);
    c1.printnum();

    c2.setnum(8,9);
    c2.printnum();

    sum = sumcom(c1,c2);
    sum.printnum();



    return 0;
}