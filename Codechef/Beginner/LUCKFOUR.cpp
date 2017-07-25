#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll count = 0,i;
        string num;
        cin>>num;
        ll len = num.length();
        for(i=0;i<len;i++)
        {
            if(num[i]=='4')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
 
