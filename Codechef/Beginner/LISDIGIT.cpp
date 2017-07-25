#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll lis[n+1];
        for(i=0;i<n;i++)
        {
            cin>>lis[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<lis[i];
        }
        cout<<endl;
    }
}
 
