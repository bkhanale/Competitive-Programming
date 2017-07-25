#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100001];
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
ll F(ll L, ll R, ll X, ll Y)
{
     ll result=0,i,j;
     for(i=X;i<=Y;i++)
     {
         if(isPrime(i))
         {
             for(j=L;j<=R;j++)
             {
                  ll number = a[j];
                  ll exponent = 0;
                  while(number%i==0)
                  {
                     exponent=exponent+1;
                     number=number/i;
                  }
                  result = result + exponent;
             }
         }
     }
     return result;
}
int main()
{
    ios::sync_with_stdio(false);
    ll n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r,x,y;
        cin>>l>>r>>x>>y;
        cout<<F(l-1,r-1,x,y)<<endl;
    }
    return 0;
}

