#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,i,count0=0,fine=0,due=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i=i+1)
        {
            if(a[i]==0)
            {
                due=due+1000;
                fine=fine+100;
                count0++;
            }
            if(a[i]==1&&count0!=0)
            {
                fine=fine+100;
            }
        }
        cout<<due+fine<<endl;
    }
}
 
