#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	ll t;
	cin>>t;
	while(t--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}