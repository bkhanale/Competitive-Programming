#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll s[n+1];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        ll min=9999999999;
        sort(s,s+n);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(s[i]-s[j])<min)
                {
                    min=abs(s[i]-s[j]);
                }
            }
        }
        cout<<min<<endl;
    }
}
 
