#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
    ll r,g,b;
    cin>>r>>g>>b;
    cout<<min(min(r,g),b)<<endl;
    return 0;
}