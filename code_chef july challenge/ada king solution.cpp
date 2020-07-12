 #include <iostream>
using namespace std;
typedef long long int ll;


int main() {

	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    char a[64];
	    a[0]='O';
	    for(int i=1;i<64;i++)
	    a[i]='X';
	    
	        for(int i=1;i<n;i++)
	            a[i]='.';
	            
    for (int row = 0; row < 8; row++) {
    for (int column = 0; column < 8; column++) {
        cout << a[row * 8 + column] ;
    }
    cout <<"\n";
    
}
    

}
	return 0;
}
