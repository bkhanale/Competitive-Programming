#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		ll n,m,tA=0,tB=0;
		cin>>n>>m;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				char ch;
				cin>>ch;
				if((i+j)%2==0){
					if(ch=='R'){
						tB+=5;
					}else{
						tA+=3;
					}
				}else{
					if(ch=='R'){
						tA+=5;
					}else{
						tB+=3;
					}
				}
			}
		}
		cout<<min(tA,tB)<<endl;
	}
	return 0;
}