#include<iostream>
using namespace std;

class A
{
private:
          int a;
          int b;
public:
          friend class B;
};
class B
{
public:
          void getset(A obj)
          {
                    cin>>obj.a;
                    cout<<obj.a<<endl;
                    cin>>obj.b;
                    cout<<obj.b;
          }
};
int main()
{
          A obj1;
          B obj2;

          obj2.getset(obj1);

          return 0;
}
