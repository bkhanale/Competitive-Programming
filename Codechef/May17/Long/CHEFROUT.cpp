#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll pri(char c)
{
    if(c=='C')
        return 1;
    if(c=='E')
        return 2;
    if(c=='S')
        return 3;
}
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        string s;
        ll cook=0,eat=0,sleep=0,flag=0;
        cin>>s;
        for(i=1;i<s.length();i++)
        {
            if(!(pri(s[i-1])<=pri(s[i])))
            {
                cout<<"no\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"yes\n";
        }
    }
    return 0;
}
 
