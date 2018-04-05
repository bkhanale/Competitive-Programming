#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N=2000010;
ll a[N],b[N];

ll Abs(ll num){
	return num<0?-num:num; 
}

ll fun(ll num){
	ll od=0,ev=0;
	while(num){
		ll rem=num%10;
		num/=10;
		if(rem%2==0)
			ev+=rem;
		else od+=rem;
	}
	return Abs(ev-od);
}

void init(){
	ll sum=0;
	for(ll i=0;i<2000000;i++){
		sum+=fun(i+2);
	}
	b[0]=sum;a[0]=sum;
	for(ll i=1;i<2000000;i++){
		b[i]=b[i-1]-fun(i+1);
		a[i]=a[i-1]+b[i];
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	init();
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<a[n-1]-(a[2*n-1]-a[n-1])<<endl;
	}
	return 0;
}