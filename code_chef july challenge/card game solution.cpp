#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fll(i,a,n) for(ll i=a;i<n;i++)
#define fi(i,a,n) for(int i=a;i<n;i++)
ll powe(ll n1){
    ll sume = 0; 
    while (n1 != 0) 
    { 
     sume = sume + n1 % 10; 
     n1 = n1/10; 
    }  
 return sume;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n ;
	   ll c=0,m=0;
	   while(n--){
	       ll a,b;
	       cin >> a >> b;
	       ll pa = powe(a);
	       ll pb=powe(b);
	       //cout << pa << " " <<pb << endl;
	       if(pa>pb)
	        c++;
	        else if(pb>pa)
	        m++;
	        else{
	            c++;
	            m++;
	            
	        }
	        
	   }
	   if(c>m)
	            cout << 0 << " " <<c;
	            else if(m>c)
	            cout << 1 <<" "<<m;
	            else
	                cout << 2 << " " << c;
	   cout << "\n";
	    
	}
	return 0;
}