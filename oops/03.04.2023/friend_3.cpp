#include<iostream>

using namespace std;

class y;

class x {
    int data;

    public:

    void setData(int a){
        data = a;
    }
    friend void add(x,y);
};

class y{
    int d;

    public:

    void setData(int a){
        d = a;
    }

    friend void add(x,y);
};

void add(x o1, y o2){
    cout<<"summing datas of x and y object gives "<< o1.data +o2.d<< endl;
}

int main ()
{
    x a;
    y b;
    a.setData(3);
    b.setData(9);

    add(a,b);

    return 0;
}