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
	for(int i=0;i<t;i++){
	    ll n;
	    ll x;
	    ll y;
	    cin >> x ;
	     cin >> y ;
	      cin >> n ;

	      while(n!=0){
	        if( n%x==y) {

	            break;
	        }else{
	              n--;
	        }

	      }
	    cout<<n<<endl;


}
}
