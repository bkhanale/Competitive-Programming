#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,b,ls;
    cin>>t;
    while(t--)
    {
        cin>>b>>ls;
        cout<<sqrt(ls*ls-b*b)<<' '<<sqrt(ls*ls+b*b)<<endl;
    }
}
 
