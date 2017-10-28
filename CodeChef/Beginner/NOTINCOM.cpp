#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t,i,j,a[100000],b[100000],n,m;
    cin>>t;
    while(t--)
    {
        long long count=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        i=0;j=0;
        while (i<n && j<m)
        {
            if (a[i]==b[j])
            {
                count++;
                i++;
                j++;
            }
            else if (a[i]<b[j])
                i++;
            else
                j++;
        }
        cout<<count<<endl;
    }
}
 
