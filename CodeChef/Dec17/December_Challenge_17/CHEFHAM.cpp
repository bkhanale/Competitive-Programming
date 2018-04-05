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
		ll n;
		cin>>n;
		ll a[n],b[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			if(i>0){
				b[i-1]=a[i];
			}
		}
		b[n-1]=a[0];
		if(n==1){
			cout<<0<<endl<<a[0]<<endl;
		}
		else if(n==2 && a[0]==a[1]){
			cout<<0<<endl<<a[0]<<" "<<a[1]<<endl;
		}
		else if(n==3 && (a[1]==a[2] || a[0]==a[1] || a[0]==a[2])){
			cout<<2<<endl<<a[1]<<" "<<a[2]<<" "<<a[0]<<endl;
		}else{
			cout<<n<<endl;
			ll cnt=0,temp;
			while(cnt!=n){
				for(ll i=0;i<n;i++){
					if(a[i]==b[i]){
						cnt=0;
						temp=b[n-1];
						for(ll i=n-2;i>=0;i--){
							b[i+1]=b[i];
						}
						b[0]=temp;break;
					}else{
						cnt++;
					}
				}
			}
			for(ll i=0;i<n;i++){
				cout<<b[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}