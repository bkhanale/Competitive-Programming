#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        if(abs(b-a)==2)
        {
            cout<<"YES\n";
        }
        else if((a%2)==1&&b==a+1)
        {
            cout<<"YES\n";
        }
        else if(b%2==1&&a==b+1)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
 
