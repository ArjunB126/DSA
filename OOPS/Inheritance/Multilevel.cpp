#include <bits/stdc++.h>
using namespace std;

// Example of Multi level Inheritance
class Fruit {
    public:
    string name = "Tasty Mango";

};

class Mango: public Fruit {
  public:
  int weight = 10;
};


 class Alphonso:public Mango{
            public:
                int colour;
                int taste ;
 };


int main() {

Alphonso A;
cout<< A.name <<endl;


  return 0;
}
