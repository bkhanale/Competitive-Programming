#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll n100=n/100;
        n=n%100;
        ll n50=n/50;
        n=n%50;
        ll n10=n/10;
        n=n%10;
        ll n5=n/5;
        n=n%5;
        ll n2=n/2;
        n=n%2;
        ll n1=n/1;
        cout<<n100+n50+n10+n5+n2+n1<<endl;
    }
}
 
