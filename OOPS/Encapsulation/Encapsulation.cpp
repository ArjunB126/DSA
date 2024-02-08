// Encapsulation 

#include <iostream>
using namespace std;

// Example of Encapsulation 

// Class 
class Animal{
  // Making it private 
      private:
              int age;
              int weight;

              // Functions inside class 
              public:
                  void eat(){
                      cout<<  "Zhala na bhau J1 !!" <<endl;
                  }

                // As the data is private it can be accessed through getters and setters 
                  int getAge (){
                    return this -> age;
                  }

                  void setAge( int age ){
                        this -> age = age ;

                  }
};
int main() {
  cout << "Hello world!" << endl;
  return 0;
}