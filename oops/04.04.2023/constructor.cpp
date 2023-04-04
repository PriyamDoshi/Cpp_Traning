#include<iostream>

using namespace std;

class complex{
    int a,b;
    public:
    // creating a constructor
    complex(void);

    void printdata(){
        cout << " the complex number is "<<a<<" + "<<"i"<<b<<endl;
    }
};

complex :: complex(void){
    a = 0;
    b = 0;
} 


int main ()
{
    complex a;
    a.printdata();
    return 0;
}