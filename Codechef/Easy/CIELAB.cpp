#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,ans,temp,count=0,i;
    cin>>a>>b;
    ans=abs(a-b);
    if(ans%10==9)
    {
        cout<<ans-1;
    }else{
        cout<<ans+1;
    }
    return 0;
}
 
