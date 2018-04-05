#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll minn(ll a,ll b){
	return a<b?a:b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ll t;
	cin>>t;
	while(t--){
		ll x,y,z,a,b,c;
		cin>>x>>y>>z>>a>>b>>c;
		if(x>y){swap(x,y);}
		if(y>z){swap(y,z);}
		if(x>y){swap(x,y);}
		b=minn(b,2*a);c=minn(c,a+b);
		if(x==y && y==z){
			ll minn1=minn(3*b,2*c);
			//cout<<"SolveSame ";
			cout<<minn1*(x/2)+(x&1)*c<<endl;
			continue;
		}
		ll c1=(z-y);
		if((z-y)<x){
			//cout<<"xi="<<x<<" yi="<<y<<" zi="<<z<<endl;
			x-=c1;y-=c1;z-=c1*2;
			//cout<<"xo="<<x<<" yo="<<y<<" zo="<<z<<endl;
			ll p=c1*minn(c+a,2*b);
			//cout<<"pini="<<p<<endl;
			if(x==y && y==z){
				ll minn1=minn(3*b,2*c);
				//cout<<"SolveSame1 ";
				cout<<p+minn1*(x/2)+(x&1)*c<<endl;
				continue;
			}
			//cout<<"0. a="<<a<<" b="<<b<<" c="<<c<<endl;
			ll c2=minn(x/2,y/3);p+=c2*minn(2*c+b,4*b);
			//cout<<"1. c2="<<c2<<" p="<<p<<endl;
			x-=c2*2;y-=c2*3;z-=c2*3;
			//cout<<"2. x="<<x<<" y="<<y<<" z="<<z<<endl;
			if(x){
				ll minn1=minn(3*b,2*c);
				p+=(minn1*(x/2)+(x&1)*c);
				y-=x;z-=x;
				//cout<<"3. p="<<p<<" y="<<y<<" z="<<z<<endl;
			}
			p+=y*b+(z-y)*a;
			//cout<<"Solve1 ";
			cout<<p<<endl;
			continue;
		}else{
			y-=x;z-=(x*2);
			ll p=x*minn(c+a,2*b);
			//cout<<"Solve2 ";
			cout<<p+y*b+(z-y)*a<<endl;
			continue;
		}
	}
	return 0;
}