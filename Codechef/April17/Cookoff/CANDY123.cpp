#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll sl=0,sb=0,cnt=1;
        while(sl<=a&&sb<=b)
        {
            if(cnt%2==0)
            {
                sb=sb+cnt;
            }else{
                sl=sl+cnt;
            }
            cnt++;
        }
        if(cnt%2!=0)
        {
            cout<<"Limak\n";
        }else{
            cout<<"Bob\n";
        }
    }
    return 0;
}
 
