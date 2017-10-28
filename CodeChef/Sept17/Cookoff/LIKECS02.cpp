#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;
#define pair<ll,ll> pii;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
       int n;
       cin >> n;
       int l1=n-n/2;
       for(int i=l1;i<l1+n;i++)
       {
           cout<<i<<" ";
       }
       cout<<endl;
	}
	return 0;
}