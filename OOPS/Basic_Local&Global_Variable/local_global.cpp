                               // Local Variables
// Variables defined within a function or block are said to be local to those functions.  

// --> Anything between ‘{‘ and ‘}’ is said to inside a block.
// --> Local variables do not exist outside the block in which they are declared, i.e.     
//     they can not be accessed or used outside that block.
// --> Declaring local variables: Local variables are declared inside a block.


//                                     Global Variables
// As the name suggests, Global Variables can be accessed from any part of the program.

// They are available through out the life time of a program.
// They are declared at the top of the program outside all of the functions or blocks.
// Declaring global variables: Global variables are usually declared outside of all of 
// the functions and blocks, at the top of the program. They can be accessed from any 
//  portion of the program.

#include<bits/stdc++.h>
using namespace std;

int x = 55;  // Global Variable 

int main(){
    int x = 20; // Local Variable 
    cout << "The Value for x in Local Variable is :"<< x << endl; // Calling Local Variable because it is very Close in Terms of Declaration 
    cout << "The Value for x in Global Variable is :"<< ::x <<endl; // Thw Way Of Calling Global Variable

return 0;

}