#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a;
		vector<bool> v(20001,false);
		v[0]=true;
		for(ll i=0;i<n;i++){
			cin>>b;
			for(ll j=a;j>=0;j--){
				if(v[j])v[j+b]=true;
			}
		}
		if(v[a])cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
 
