#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,count=0;
        cin>>n;
        char g[n+1];
        for(i=0;i<n;i++)
        {
            cin>>g[i];
        }
        for(i=0;i<n;i++)
        {
            if(g[i]=='I')
            {
                cout<<"INDIAN"<<endl;
                break;
            }
            else if(g[i]=='Y')
            {
                cout<<"NOT INDIAN"<<endl;
                break;
            }else{
                count++;
            }
        }
        if(count==n)
        {
            cout<<"NOT SURE"<<endl;
        }
    }
}
 
