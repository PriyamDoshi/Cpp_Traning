#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    ofstream out;
    out.open("semple.txt");
    out<< "this is me ";
    out.close();

    return 0;
}