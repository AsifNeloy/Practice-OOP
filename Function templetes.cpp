#include<iostream>
using namespace std;

template <class declare1, class declare2>
declare2 add(declare1 a, declare2 b)
{
          return a+b;
}
int main()
{
          cout<<add(50,60)<<endl;
          cout<<add(5.0001,6.23)<<endl;
          cout<<add(60,0.52)<<endl;

          return 0;
}
