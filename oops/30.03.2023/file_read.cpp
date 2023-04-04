#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    string s;
    ifstream in("semple2.txt");
    //in>>s;
    while(in.eof()==0){
    getline(in,s);
    cout << s << endl;
    }
   
    return 0;
}