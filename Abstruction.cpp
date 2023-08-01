#include<iostream>
using namespace std;

class user
{
public:
          void virtual firstline() = 0;

};
class First:public user
{
public:
          void firstline()
          {
                    cout<<"Welcome to comedy"<<endl;
          }
};
class Second:public user
{
          void firstline()
          {
                    cout<<"Welcome to Action"<<endl;
          }
};
int main()
{
          user *p;
          First f;
          Second s;

          p=&f;
          p->firstline();

          p=&s;
          p->firstline();

          return 0;
}
