#include<iostream>

using namespace std;

class emp{
   int id;
   int sal;

   public:

   void setid(){
    cout<<"inter id of emp"<<endl;
    cin >> id;
   }
   void getid(){
    cout <<"id of emp is "<<id<<endl;
   }
   void setsal(){
    cout<<"what is sal of emp? "<<endl;
    cin>>sal;
   }
   void getsal(){
    cout<<"sal of emp is "<< sal<< endl;
   }
};

int main ()
{
    emp e[5];
    for (int i = 0; i<5; i++){
        e[i].setid();
        e[i].setsal();
    }

    for(int i = 0 ; i<5; i++){
        e[i].getid();
        e[i].getsal();
    }   
    return 0; 
}