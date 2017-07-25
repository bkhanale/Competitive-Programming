#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        ll n,reverse=0;
        cin>>n;
        while (n>0)
	    {
	        reverse *= 10;
	        reverse += n%10;
	        n /= 10;
	    }
        cout<<reverse<<endl;
    }
}
 
