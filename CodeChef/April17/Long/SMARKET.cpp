#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,i,j,li,ri,ki,cnt=0,count=0;
        cin>>n>>q;
        ll sk[n];
        for(i=0;i<n;i++)
        {
            cin>>sk[i];
        }
        while(q--)
        {
            cnt=0;count=1;
            vector<long long int> v;
            cin>>li>>ri>>ki;
            for(i=li-1;i<=ri-2;i++)
            {
                if(sk[i]==sk[i+1])
                {
                    count++;
                }else{
                    v.push_back(count);
                    count=1;
                }
            }
            v.push_back(count);
            for(i=0;i<v.size();i++)
            {
                if(v[i]>=ki)
                {
                    cnt++;
                }
                //cout<<"v="<<v[i]<<endl;
            }
            cout<<cnt<<endl;
            v.clear();
        }
    }
    return 0;
}

