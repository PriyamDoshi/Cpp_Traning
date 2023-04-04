#include<iostream>
#include"hero.cpp"

using namespace std;

class Hero{
    public:
  char name[50];
  int health;
  int level;

  // call constructor

  Hero(){
    cout << "constructer colled"<< endl;
  }

  void print()
  {
    cout<<health<<endl;
  }


  int getHealth()
  {
    return health;
  }

  int getLevel()
  {
    return level;
  }

  void setHealth(int h)
  {
    health = h;
  }

  void setlevel(int l)
  {
    level = l;
  }
};

int main ()
{
   hero h1;
   Hero a;
   Hero *ptr = new Hero;

   h1.helth = 50;
   h1.level = 8;

   a.setHealth(80);


   cout<< "health is :"<<h1.helth<< endl;
   cout<<"level is :"<<h1.level<< endl;

   //cout<< "level is " << a.getLevel() << endl;
   //cout << "class size is :"<<sizeof(h1)<<endl;
   return 0;
}