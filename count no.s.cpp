/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{
    int a [10] = {1,1,1,1,1,1,2,2,3,2};
    int n=0;
    int count = 0;
 cin>> n;
 for(int i =0;i<10;i++){
     if(n==a[i]){
         count++;
     }
     
 }
 cout<<count;
}
