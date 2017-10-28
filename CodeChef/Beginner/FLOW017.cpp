#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>=b&&a<=c)
        {
            cout<<a<<endl;
        }
        else if(a>=c&&a<=b)
        {
            cout<<a<<endl;
        }
        else if(b>=a&&b<=c)
        {
            cout<<b<<endl;
        }
        else if(b>=c&&b<=a)
        {
            cout<<b<<endl;
        }
        else if(c>=a&&c<=b)
        {
            cout<<c<<endl;
        }
        else if(c>=b&&c<=a)
        {
            cout<<c<<endl;
        }
    }
}
 
