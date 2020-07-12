#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fll(i,a,n) for(ll i=a;i<n;i++)
#define fi(i,a,n) for(int i=a;i<n;i++)

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--){
	   ll n;
	    cin >> n ;
	   ll a[n];
	  
	    ll s=0;
	    for(ll i=0;i<n;i++)
	    cin >> a[i];
	        
	    
	    for(ll i=1;i<n;i++){
	        s+=abs(a[i]-a[i-1])-1;
	        
	    }
	    cout << s << "\n";
	   
	    
	}
	return 0;
}