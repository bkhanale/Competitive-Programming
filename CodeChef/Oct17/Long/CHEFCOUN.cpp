#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k=110247-n;
        cout<<k/2<<" "<<k/5<<" ";
        for(ll i=0;i<n-42951;i++)
        {
        	cout<<"1 ";
        }
        for(ll i=0;i<42949;i++)
        {
        	cout<<"100000 ";
        }
        cout<<endl;
    }
    return 0;
}