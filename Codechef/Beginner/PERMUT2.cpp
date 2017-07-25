#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,a[100000],inva[100000],count;
    A:
    cin>>n;
    if(n!=0)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            inva[a[i]-1]=i+1;
        }
        for(i=0;i<n;i++)
        {
            if(inva[i]==a[i])
            {
                count++;
            }
        }
        if(count==n)
        {
            cout<<"ambiguous"<<endl;
        }else{
                cout<<"not ambiguous"<<endl;
        }
        goto A;
    }
}
 
