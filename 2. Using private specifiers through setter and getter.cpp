#include<iostream>
#include<string>
using namespace std;

class loyal
{
private:
          string name;
public:
          void setter(string x)
          {
                    name=x;
          }
          string getter()
          {
                    return name;
          }
};
int main()
{

          loyal nai;
          nai.setter("Valo hoya jao");
          cout<<nai.getter();
          nai.setter("Poysha lage na");
          cout<<nai.getter();

          return 0;

}
