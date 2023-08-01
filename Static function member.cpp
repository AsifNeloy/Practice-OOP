#include <iostream>
using namespace std;

class Box {
  public:
   static int objectCount;
   Box(double l, double b, double h){
     cout<<"Constructor called"<<endl;
     length = l;
     breadth = b;
     height = h;
	  objectCount++;
   }
  static int getCount()
  {
         return objectCount;
  }
  private:
      double length;
      double breadth;
      double height;
};

int Box::objectCount = 0; //initialize
int main() {
          Box Box1(3.3, 1.2, 1.5);
   Box Box2(8.5, 6.0, 2.0);

   cout <<"Total objects:"         <<Box::getCount();
   return 0;
}
