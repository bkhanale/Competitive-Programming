#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,g,b,k;
        cin>>r>>g>>b;
        cin>>k;
        cout << min(r, k - 1) + min(g, k - 1) + min(b, k - 1) + 1 << endl;
    }
    return 0;
}
 
