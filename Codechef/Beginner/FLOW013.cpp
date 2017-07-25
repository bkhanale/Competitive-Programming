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
        if(a+b+c==180&&a!=0&&b!=0&&c!=0)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
 
