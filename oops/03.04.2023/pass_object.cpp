#include<iostream>

using namespace std;

class complex{
    int a;
    int b;

    public:

    void setCom(int x, int y){
        a = x;
        b = y;
    }

    void comsum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        cout<< "complex num sum is "<< a<< " + "<< b<<"i"<<endl;
    }

};

int main ()
{
    complex c1, c2, c3;
    c1.setCom(1,5);
    c2.setCom(5,8);

    c3.comsum(c1, c2);

    return 0;
    

}