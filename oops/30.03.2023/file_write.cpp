#include<iostream>
#include<fstream>

using namespace std;

int main ()
{
    string s;
    ofstream abc("semple.txt");
    cout<< "inter your name ";
    cin>>s;
    abc<<" your name is "<< s;
    abc.close();

    string c;
    ifstream hin("semple.txt");
    getline(hin, c);
    cout<< c;
    hin.close();

    return 0;
}