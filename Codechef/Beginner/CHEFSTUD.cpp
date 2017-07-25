#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll l=s.length();
        ll count=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='>')
            {
                s[i]='<';
            }
            else if(s[i]=='<')
            {
                s[i]='>';
            }
        }
        for(i=0;i<l-1;i++)
        {
            if(s[i]=='>'&&s[i+1]=='<')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
 
