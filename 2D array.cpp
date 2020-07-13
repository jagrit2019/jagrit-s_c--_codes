
#include <iostream>

using namespace std;

int main()
{
    int r,c;
   cout<<"ENter the dimention of the metrics you want to print"<<endl;
   cout<<"Starting with rows:";
   cin>>r;
   cout<<"Now its time for column:";
   cin>>c;

   float array[r][c];
   for(int i=0;i<c;i++){
       for(int j=0;j<r;j++){
           cin>>array[j][i];
       }
   }
   cout<<"Now its time to print";


   for(int i=0;i<c;i++){
       for(int j=0;j<r;j++){
          cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << array[i][j]<<endl;
       }
       cout<<endl;
   }

}
