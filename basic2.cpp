#include <iostream>

using namespace std;

int main(){
int a[5]= {1,2,3,4,5};
int n = sizeof(a)/sizeof(a[0]);
int no = n/2;

for(int i = 0; i<no;i++){

    int temp = a[i];
    a[i] = a[n-i];
    a[n-i] = temp;
}
for(int j =0;j<n;j++){
    cout<<a[j] << endl;
}
}
