

#include <iostream>
using namespace std;

int main(){
    
    int a[5] = {1,2,3,4,5};
    int b[7] = {1,1,1,1,1,1,7};
    int counter =0;
  
    int a_size = sizeof(a)/sizeof(a[0]);
    int b_size = sizeof(b)/sizeof(b[0]);
    int intersection[a_size+b_size];
    int unionarr[a_size+b_size];
    for(int i = 0;i<a_size;i++){
        for(int j=0;j<b_size;j++){
            if(a[i]==b[j]){
               for(int p =0 ; p<counter;p++){
                   if(a[i]==intersection[p]){
                       break;
                   }
                   else{
                       intersection[counter]=a[i];
                   }
               }
                
                counter++;
            }
            
        }
    }
     for(int k = 0;k<1;k++){
         cout<<intersection[k];
}
}
