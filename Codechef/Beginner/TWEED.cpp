#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,neven=0,nodd=0;
        string p;
        cin>>n>>p;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(p[1]=='e' && n==1 && a[0]%2==0)
		{
			printf("Dee\n");
		}
		else
		{
			printf("Dum\n");
		}
    }
}
 
