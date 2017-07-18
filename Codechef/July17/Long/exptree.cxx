#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int test;
ll n;
const int mod1 = 1e9 + 7;
const int mod2 = 1e9 + 9;

ll power(ll x,int y,int m){
	if(y==0) return 1;
	
	ll p = power(x,y/2,m)%m;
	p = ((p%m)*(p%m)%m);
	return (y%2==0)?p:((x%m)*(p%m))%m;
}

int main(){
	ios_base::sync_with_stdio(false);
	
	cin>>test;
	
	while(test--){
		
		cin>>n;
		
		if(n==1){
			cout<<0<<" "<<0<<endl;
		}else{
			
			ll num1 = ((n%mod1)*((n-1)%mod1))%mod1;
			ll num2 = ((n%mod2)*((n-1)%mod2))%mod2;
			ll temp = 2*(2*n-3);
			int q1 = power(temp,mod1-2,mod1);
			int q2 = power(temp,mod2-2,mod2);
			int ans1 = (num1*q1)%mod1;
			int ans2 = (num2*q2)%mod2;
			
			cout<<ans1<<" "<<ans2<<endl;
			
		}
		
	}
	
	return 0;
}
