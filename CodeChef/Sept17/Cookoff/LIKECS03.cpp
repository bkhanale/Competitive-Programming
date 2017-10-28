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
        ll n,k;
        cin>>n>>k;
        int a[n];
        vector<int> b(10000000,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        ll cnt=0;
        for(int i=0;i<k;i++)
        {
            if(b[1<<i]==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
	}
	return 0;
}