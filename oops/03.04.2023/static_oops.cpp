#include <iostream>

using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << id<<"  "<< count<<endl;

    }

    //static function

    static void getCount(){
        //cout << id; through an error
        cout <<"The value of count is "<<count<<endl;
    }
};

int employee ::count = 1000;
int main()
{
    employee harry, r, l;
    harry.setData();
    harry.getData();

    r.setData();
    r.getData();

    l.setData();
    l.getData();

    return 0;
}