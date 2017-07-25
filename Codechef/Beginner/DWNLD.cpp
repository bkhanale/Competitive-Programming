#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k,i,data=0,ti=0,pri,exttime=0,extdata=0,temp=0,j=0,time=0;
        cin>>n>>k;
        ll t[n+1],d[n+1];
        if(k==0)
        {
            for(i=0;i<n;i++)
            {
                cin>>t[i]>>d[i];
            }
            for(i=0;i<n;i++)
            {
                data=data+d[i]*t[i];
            }
            cout<<data<<endl;
        }else{
            for(i=0;i<n;i++)
            {
                cin>>t[i]>>d[i];
                time=time+t[i];
                if(time<=k)
                {
                    temp++;
                }
                if(time>k)
                {
                    data=data+d[i]*t[i];
                    ti=ti+t[i];
                }
            }
            if(ti==time-k)
            {
                cout<<data<<endl;
            }else{
                cout<<data+(time-k-ti)*d[temp]<<endl;
            }
        }
 
    }
}
 
