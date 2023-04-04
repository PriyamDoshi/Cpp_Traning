#include <iostream>

using namespace std;

//Forword declaration

class complex;

class calculater{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumRealCom(complex , complex );
    int sumImgCom(complex, complex);
};


class complex 
{
int a,b;



friend int calculater:: sumRealCom(complex o1, complex o2);
friend int calculater :: sumImgCom(complex , complex);


/*if you want to give access to all the function of class then we can use 

friend class calculater;

*/




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

 int calculater :: sumRealCom(complex o1, complex o2){
        return (o1.a + o2.a);
    }
int calculater :: sumImgCom(complex o1, complex o2){
    return (o1.b + o2.b);
}




int main (){

    complex c1, c2 , sum;

    c1.setnum(3,4);
    c1.printnum();
    c2.setnum(8,9);
    c2.printnum();
    
    calculater cal;
    int result = cal.sumRealCom(c1,c2);
    cout <<"the sum of real part is "<< result<<endl;
    int res = cal.sumImgCom(c1,c2);
    cout <<"the sum of img part is "<< res<<endl;

    return 0;
}