#include <iostream>
using namespace std;

// RUNTIME POLYMORPHISM IN OOPS 
class Animal{
      public:
      void Speak (){
        cout<< "Speaking " << endl;
      }

};


class Dog: public Animal {
          public:
          // Method / Function  Overriding 
          void Speak(){
            cout<< "Barking" << endl;
          }
};



int main() {

Animal a;
a.Speak(); // CALLING SAME METHOD BUT RESPONSE IS DIFFERENT  


Dog b;
b.Speak(); // CALLING SAME METHOD BUT RESPONSE IS DIFFERENT  

}