#include<iostream>

using namespace std;

class binary
{
   string s;

   public :

   void read(void);
   void chk_bin(void);
};

void binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin()
{
    for(int i = 0 ; i< s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"incorrect"<<endl;
            exit(0);
        }
    }
}


int main ()
{
   binary b;
   b.read();
   b.chk_bin();
   return 0;
}