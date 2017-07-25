#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,i;
        cin>>a>>b>>n;
        a = a * (1 << (n+1)/2);
        b = b * (1 << n-(n+1)/2);
        if(b>a){
            cout<<b/a<<endl;
        }else{
            cout<<a/b<<endl;
        }
    }
    return 0;
}

