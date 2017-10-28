#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int lcm(int a,int b)
{
    int n1=a,n2=b;
    while(n1!=n2)
    {
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
    return a*b/n1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
    }
}
 
