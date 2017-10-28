#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        ll n,k,tuz,temp;
        cin>>n>>k;
        tuz = n - (n / 1) * 1;
        for(i=1;i<=k;i++)
        {
            temp = n - (n / i) * i ;
            if(temp>tuz)
            {
                tuz = temp;
            }
        }
        cout<<tuz<<endl;
    }
}
 
