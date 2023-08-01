#include<iostream>
#include<string>
using namespace std;

class loyal
{
public:
          virtual void display()
          {
                    cout<<" Fagun purnima raate"<<endl;
          }
};
class cat : public loyal
{
public:
          void display()
          {
                    cout<<" Chol polaye jai"<<endl;
          }
};
class dog: public loyal
{
public:
          void display()
          {
                    cout<<" Are chol polaye jai"<<endl;
          }
};

int main()
{
          loyal *l;
          cat k;
          l= &k;
          l -> display();

          dog d;
          d.display();

          return 0;
}
