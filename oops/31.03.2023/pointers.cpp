#include<iostream>

using namespace std;

int main()
{
   int a = 5, b =6, c;
   int *p = &a, *ptr = &b;
   cout <<"inter velue of c "<<endl;
   cin>>c;
   cout<<"value of c is"<< c << "and address of c is"<< &c<<endl;
   cout << p<<endl;
   cout << *p<<endl;
   cout << &a << endl;

   // dobble pointers

   int **x = &p;
   cout << "add of p is "<< x<<endl;
   cout << "value of p is "<< p <<endl;
   cout << "value of p using x is "<< *x<<endl;
   cout << "value of a using a is "<< **x<<endl; 

   return 0;
}