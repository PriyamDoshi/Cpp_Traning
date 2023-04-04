#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st = "doshi bhai";
    //Opening files using constructor and writing it
    ofstream out("semple.txt");//write operation
    out<<st;
    
    //opening filr using constructor and reading it
    string st2;
    ifstream in("semple.txt");//read operater
    //in>>st2;
    getline(in,st2);
    cout << st2<< endl;
    
    return 0;
}