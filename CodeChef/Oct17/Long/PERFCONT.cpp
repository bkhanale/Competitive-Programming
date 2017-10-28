#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		ll cw=0,hrd=0;
		for(ll i=0;i<n;i++)
		{
			ll stu;
			cin>>stu;
			if(stu>=p/2)
				cw++;
			else if (stu<=p/10)
				hrd++;
		}
		if(cw==1&&hrd==2)
			cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}