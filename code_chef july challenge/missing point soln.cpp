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
	   
	    map<ll,ll> fx , fy;
    ll X,Y;
    ll ansx , ansy;

    for(ll i = 0 ; i<4*n-1 ; i++){
    cin>>X>>Y;
    fx[X]++; fy[Y]++;
    }

    for(auto S : fx){
    if(S.second%2 == 1){
    ansx = S.first;
    break;
    }
    }

     for(auto S : fy){
    if(S.second%2 == 1){
    ansy = S.first;
    break;
    }
    }

    cout<<ansx<<' '<<ansy<<'\n';

	    
	}
	return 0;
}