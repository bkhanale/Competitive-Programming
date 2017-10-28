#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,b,m,time=0;
        cin>>n>>b>>m;
        while(n!=0)
        {
            time=time+(m*((n+1)/2)+b);
            m=m*2;
            n=n-(n+1)/2;
        }
        cout<<time-b<<endl;
    }
}
 
