#include<iostream>
#include<string>
using namespace std;

class over
{
public:
          void add(int a, int b)
          {
                    cout<<a+b;
          }
          void add(int a, int b, int c)
          {
                    cout<<a+b+c;
          }
          void add()
          {
                    cout<<"MOR";
          }
};
int main()
{
          over ob;
          ob.add(10,20);
          ob.add(10,20,30);
          ob.add();

          return 0;
}
