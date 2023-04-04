#include<iostream>

using namespace std;

class example{
   private:
   int data;
   int a;
   char c;

   public:
   void setdata(int d){
    data = d;
   }
   void seta(int a){
    a = a;
   }
   void setc(char c){
    c = c;
   }
   int getdata(){
    return data;
   }
};

int main ()
{
    example abc;
    abc.setdata(5);
    cout<<"value of data is "<< abc.getdata()<<endl;
    return 0;

}