#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        set<long long int> v;
        ll n,k,count=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            ll in;
            cin>>in;
            for(j=0;j<in;j++)
            {
                ll ing;
                cin>>ing;
                v.insert(ing);
            }
            if(v.size()>=k && count==0)
            {
                count=i+1;
            }
        }
        if(count==0)
        {
            cout<<"sad\n";
        }
        else if(count<n)
        {
            cout<<"some\n";
        }else{
            cout<<"all\n";
        }
    }
    return 0;
}
 
