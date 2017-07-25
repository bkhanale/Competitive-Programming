#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        ll i,count=0,count1=0;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                count++;
                if(s[i+1]!='1')
                {
                    break;
                }
            }
        }
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                count1++;
            }
        }
        if(count==count1&&count!=0)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
 
