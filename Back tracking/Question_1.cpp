// Question : Permutation of String
// Given a string, find all possible permutations of the given string.
// i/p string : "abc"

#include<bits/stdc++.h>
using namespace std;
void printPermutation(string& str , int i)
{

        // Base Case 
        if ( i >= str.length())   
        {
            cout<< str <<" ";
            return;
        }

        // 1 Case Solve kardo 
        for (int j = i; j < str.length() ; j++)
        {
           swap(str[i] , str[j]);

        //    Recursive call 
           printPermutation(str,i+1);

           
           //=Back Tracking
           swap(str[i], str[j]);
        }
        


}


int main() {
    string str = "abc";
    int i = 0;
    printPermutation ( str , i);
    return 0;
}