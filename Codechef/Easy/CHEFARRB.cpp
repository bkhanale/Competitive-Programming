#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
/**My solution: Did not work :(
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,bit,i,j,temp=0,sub,ans;
        cin>>n>>k;
        ll arr[n+1];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            bit=arr[i];sub=0;ans=0;
            for(j=i;j<n;j++)
            {
                bit=bit|arr[j];
                if(bit>=k)
                {
                    ans=j;
                    //cout<<"ans="<<ans<<endl;
                    sub=n-ans;
                    //cout<<"sub="<<sub<<endl;
                    temp=temp+sub;
                    break;
                }
            }
        }
        cout<<temp<<endl;
    }
}
Modified solution below: **/
int main()
{
	long long int i,j,k,l,t,n,k1,s,s1,p,p1,p2;
	long long int a[100005];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
		s=0;
		p=1;
		s1=0;
		for(i=1;i<=n;i++)
		{
			s=s|a[i];
			if(s>=k)
			{
			    k1=0;
			    p1=j;
				for(j=i;j>=p;j--)
				{
					k1=k1|a[j];
					if(k1>=k)
					{
						p1=j;
						break;
					}
					else
					s=k1;
				}
				s1=s1+(p1-p+1)*(n-i+1);
				p=p1+1;
			}
		}
		printf("%lld\n",s1);
	}
	return 0;
}
 
