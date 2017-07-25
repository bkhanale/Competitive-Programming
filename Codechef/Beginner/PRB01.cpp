#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prime(ll n)
{
    ll i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(prime(n))
        {
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}
 
