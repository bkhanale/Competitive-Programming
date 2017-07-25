#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,sset=0,cset=0;
        cin>>n;
        ll a[n];
        vector<ll> neg;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
                sset=sset+a[i];
                cset++;
            }else{
                neg.push_back(a[i]);
            }
        }
        sort(neg.begin(),neg.end());
        ll sstotal=sset*cset,tal=0;
        if(neg.size()>0)
        {
            for(i=neg.size()-1;i>=0;i--)
            {
                ll neginsset=(sset+neg[i])*(cset+1);
                if(sstotal<neginsset)
                {
                    sstotal=neginsset;
                    sset=sset+neg[i];
                    cset++;
                }else{
                    tal=tal+neg[i];
                }
            }
        }
        cout<<tal+sstotal<<endl;
    }
}
 
