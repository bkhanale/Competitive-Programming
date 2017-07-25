#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,a[10],i,j,k,count,temp,b[10],cnt=0;
        cin>>l>>r;
        for(i=0;i<10;i++)
        {
            cin>>a[i];
            b[i]=0;
        }
        count=0;
        for(i=l;i<=r;i++)
        {
            int flag=0;temp=i;
            while(temp!=0)
            {
                b[temp%10]++;
                temp=temp/10;
            }
            for(j=0;j<10;j++)
            {
                //cout<<"b["<<j<<"]"<<b[j]<<" "<<"a["<<j<<"]"<<a[j]<<endl;
                if(b[j]==a[j])
                {
                    //cout<<"j="<<j<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                count++;
            }
            for(j=0;j<10;j++)
            {
                b[j]=0;
            }
        }
        cout<<count<<endl;
    }
}

