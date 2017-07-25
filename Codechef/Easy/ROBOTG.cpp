#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char s[11];
		cin>>s;
		int l=strlen(s);
		int flag=1,ans=0;
		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				flag=1;
				int p=i;
				int d=j;
				for(int k=0;k<l;k++)
				{
 
					if(s[k]=='L')
					{
						d--;
					}
					else if(s[k]=='U')
					{
						p--;
					}
					else if(s[k]=='R')
					{
					    d++;
					}
					else if(s[k]=='D')
					{
						p++;
			      	}
					if(p<0||p>=n)
					{
						flag=0;
						break;
					}
					if(d<0||d>=m)
					{
						flag=0;
						break;
					}
				}
				if(flag)
				{
					ans=1;
					break;
				}
			}
			if(ans)
			break;
		}
		if(ans)
		cout<<"safe\n";
		else
		cout<<"unsafe\n";
	}
}
 
