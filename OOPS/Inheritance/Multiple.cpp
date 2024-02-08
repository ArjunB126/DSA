#include <bits/stdc++.h>
using namespace std;

// Example of Multiple Inheritance
// Combining Properties of 2 class into one class 

class A{
    public:
    int age = 50;
};

class B{
  public:
  int weight = 80;

};


class C:public  A , public B {
      public:
      string  color = "White";
};


int main() {

 C obj;
 cout << obj.age << " " << obj.weight << " " << obj.color << endl;
  return 0;
}
