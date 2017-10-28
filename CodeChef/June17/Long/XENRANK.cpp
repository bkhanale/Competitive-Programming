#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll u,v;
        cin>>u>>v;
        cout<<((u+v)*(u+v+1)/2)+u+1<<endl;
    }
    return 0;
}
 
