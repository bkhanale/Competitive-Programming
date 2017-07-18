#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll i,cnt=0,maxi=0,maxii=0,pre;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='>' || s[i]=='<')
            {
                if(cnt==0){
                    maxi=1;
                }
                else if(pre==s[i]){
                    maxi++;
                }else{
                    maxi=1;
                }
                maxii=max(maxii,maxi);
                cnt=1;pre=s[i];
            }
        }
        cout<<maxii+1<<endl;
    }
    return 0;
}
