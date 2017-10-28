#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,num;
		cin>>n>>k;
		ll table[200001];
		memset(table,0,sizeof(table));
		for(ll i=0;i<n;i++)
		{
			cin>>num;
			table[num]=1;
		}
		ll mex=0;
		for(ll i=0;i<200001 && k>=0;i++)
		{
			while(table[i]==0 && k>=0)
			{
				mex=i;
				k--;
				i++;
			}
		}
		while(k>=0)
		{
			mex++;
			k--;
		}
		cout<<mex<<endl;
	}
	return 0;
}