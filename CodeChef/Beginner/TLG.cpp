#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,i;
    cin>>n;
    long long p1[n],p2[n];
    for(i=0;i<n;i++)
    {
        cin>>p1[i]>>p2[i];
    }
    long long p1s[n],p2s[n];
    p1s[0]=p1[0];p2s[0]=p2[0];
    for(i=1;i<n;i++)
    {
        p1s[i]=p1s[i-1]+p1[i];
        p2s[i]=p2s[i-1]+p2[i];
    }
    long long lead=max(p1s[0],p2s[0])-min(p1s[0],p2s[0]);
    long long win=0;
    for(i=1;i<n;i++)
    {
        if(max(p1s[i],p2s[i])-min(p1s[i],p2s[i])>lead)
        {
            lead=max(p1s[i],p2s[i])-min(p1s[i],p2s[i]);
            win=i;
        }
    }
    if(p1s[win]>=p2s[win])
    {
        cout<<1<<" "<<lead<<endl;
    }else{
        cout<<2<<" "<<lead<<endl;
    }
}
 
