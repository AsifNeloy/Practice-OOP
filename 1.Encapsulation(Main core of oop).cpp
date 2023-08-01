#include<iostream>
#include<string>
using namespace std;

class loyal
{
public:
          int x;
          string name;
          void display()
          {
                    cout<<name<<endl<<x;
          }
};
int main()
{
          loyal nai;
          nai.x= 13;
          nai.name= "Halay hoise";
          nai.display();

          return 0;
}
