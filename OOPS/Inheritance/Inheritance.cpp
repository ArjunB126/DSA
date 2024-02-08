#include <iostream>
using namespace std;

// Example of Inheritance 

// Parent Class  
class Animal{
        public:
        int age ;
        int weight;

        void eat(){
          cout<<  " J1 karto ahe na Bhauuu !! "<<endl;
        }

};

// Child Class 

class Dog:public Animal{

};

int main() {
  Dog D1;   // Creating Object 
 D1.eat();  // Calling method from parent 

  return 0;
}