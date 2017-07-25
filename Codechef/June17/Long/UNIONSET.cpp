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
        ll n,k,i,j,ki,total=0;
        cin>>n>>k;
        /*ll arr[n][k+1],f[k+1];
        for(i=0;i<=k;i++)
        {
            f[i]=0;
        }
        for(i=0;i<n;i++)
        {
            ll len;
            cin>>len;
            arr[i][0]=len;
            for(j=1;j<=len;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(ki=1;ki<=arr[i][0];ki++)
                {
                    f[arr[i][ki]]=1;
                }
                for(ki=1;ki<=arr[j][0];ki++)
                {
                    f[arr[j][ki]]=1;
                }
                ll flag=0;
                for(ki=1;ki<=k;ki++)
                {
                    if(f[ki]!=1)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    total++;
                }
                for(ki=0;ki<=k;ki++)
                {
                    f[ki]=0;
                }
            }
        }
        cout<<total<<endl;*/
 
        // Approach-2
        // Approach-3
        ll totsum=k*(k+1)/2,sum1=0,sum2=0;
        vector<vector<ll> >vec(n);
        for(i=0;i<n;i++)
        {
            ll len;
            cin>>len;
            for(j=0;j<len;j++)
            {
                ll num;
                cin>>num;
                vec[i].push_back(num);
            }
        }
        for(i=0;i<n;i++)
        {
            vector<bool> taken(k+1,false);
            sum1=0;
            for(auto j:vec[i])
            {
                taken[j]=true;
                sum1+=j;
            }
            for(j=i+1;j<n;j++)
            {
                sum2=0;
                for(ki=0;ki<vec[j].size();ki++)
                {
                    if(!taken[vec[j][ki]])
                    {
                        sum2=sum2+vec[j][ki];
                    }
                }
                if(sum1+sum2==totsum)
                {
                    total++;
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
 
