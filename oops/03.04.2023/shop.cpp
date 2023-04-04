#include<iostream>

using namespace std;

class shop {
    int itemPrice[100];
    int itemId[100];
    int counter;

    public :
       void initCounter(void){ counter = 0 ;}
       void setPrice();
       void getPrice();

};

void shop :: setPrice()
{
    cout<<"inter the iten ID"<<endl;
    cin>>itemId[counter];
    cout<<"inter the price of item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: getPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the ID is "<< itemId[i] <<" and price is RS "<< itemPrice[i]<<endl;

    }
    
}
int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.getPrice();
    return 0;
}