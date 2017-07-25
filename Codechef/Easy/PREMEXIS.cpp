#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,count=0;
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)
            {
                cout<<"NO"<<endl;
                break;
            }else{
                count++;
            }
        }
        if(count==n-1)
        {
            cout<<"YES"<<endl;
        }
    }
}

