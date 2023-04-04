#include<iostream>

using namespace std;

class complex
{
int a,b;
public:
    complex(int x, int y);
    void printdata(){
        cout << " the complex number is "<<a<<" + "<<"i"<<b<<endl;
    }
    
};

complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main ()
{
    //implicit call
    complex a(22,33);
    a.printdata();

    //explicit call
    complex b = complex(33,99);
    b.printdata();
    return 0;
}

