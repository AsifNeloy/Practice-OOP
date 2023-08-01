#include<iostream>
#include<string>
using namespace std;

class loyal
{
          public:
          int x;
          string name;
          void display1()
          {
                    cout<<name<<endl<<x<<endl;
          }
};
class kutta: public loyal
{
          public:
          string name2;
          void display2()
          {
                    display1();
                    cout<<name2;
          }

};
int main()
{
          kutta cutu;
          cutu.name= "KALO subhey";
          cutu.x= 13;
          cutu.name2= "SADA subhey";
          cutu.display2();

          return 0;
}
