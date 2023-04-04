#include<iostream>

using namespace std;

class emp
{
    private:
        int a,b,c;
    public:
        int x,y,z;
        void setData(int a, int b, int c);
        void getData(){
            cout <<"the value of a is "<<a<<endl;
            cout <<"the value of b is "<<b<<endl;
            cout <<"the value of c is "<<c<<endl;
            cout <<"the value of x is "<<x<<endl;
            cout <<"the value of y is "<<y<<endl;
            cout <<"the value of z is "<<z<<endl;
        }
};

void emp :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
 
int main()
{
    emp priyam;
    priyam.x = 100;
    priyam.y = 1000;
    priyam.z = 10000;
    priyam.setData(1,2,23);
    priyam.getData();
    return 0;
}