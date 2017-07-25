#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
    }
}
 
