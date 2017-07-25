#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//vector<long long int> v;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll count1=0,count0=0,i,time=0,j,z=0;
        string s;
        cin>>s;
        ll l=s.length();
        for(i=l-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                count0++;
                count1+=(l-count0)-i;
            }
        }
        z=0;count0=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                count0++;
                if(i+1!=l&&s[i+1]=='0')
                {
                    count1+=count0;
                }
            }
        }
        cout<<count1<<endl;
    }
}
 
