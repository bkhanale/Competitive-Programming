#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m;
        ll com[m+1],rem[n+1];
        for(i=0;i<m;i++)
        {
            cin>>com[i];
        }
        ll k=0,flag=0;
        for(i=1;i<=n;i++)
        {
            flag=0;
            for(j=0;j<m;j++)
            {
                if(com[j]==i)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                rem[k]=i;
                k++;
            }
        }
        sort(rem,rem+k);
        for(i=0;i<k;i++)
        {
            if(i%2==0)
            {
                cout<<rem[i]<<" ";
            }
        }
        cout<<endl;
        for(i=0;i<k;i++)
        {
            if(i%2!=0)
            {
                cout<<rem[i]<<" ";
            }
        }
        cout<<endl;
        for(i=0;i<m;i++)
        {
            com[i]=0;
        }
        for(i=0;i<n;i++)
        {
            rem[i]=0;
        }
    }
}
 
