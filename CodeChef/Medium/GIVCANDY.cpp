#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll g=__gcd(c,d);
        ll res=abs(a-b);
        res%=g;
        cout<<min(res,g-res)<<endl;
    }
    return 0;
}
 
