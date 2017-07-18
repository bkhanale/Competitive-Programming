#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,d,i,j;
		cin>>n>>d;
		
		ll di[n],t[n],s[n];
		
		for(i=0;i<n;i++)
		{
			cin>>di[i]>>t[i]>>s[i];
		}
		
		/** Approach - 1 **/
		
		/*ll max_sad = 0,max_sad_ind=0;
		
		for(i=1;i<=d;i++)
		{
			max_sad = 0,max_sad_ind=0;
			
			for(j=0;j<n;j++)
			{
				if(di[j]<=i)
				{
					if(t[j]>0)
					{
						if(s[j]>max_sad)
						{
							max_sad = s[j];
							max_sad_ind = j;
						}
					}
				}
			}
			
			if(max_sad!=0)
			{
				t[max_sad_ind]--;
			}
		}
		
		ll sadness = 0;
		
		for(j=0;j<n;j++)
		{
			if(t[j]!=0)
			{
				sadness += t[j] * s[j];
			}
		}
		cout<<sadness<<endl;*/
		
		/** Approach - 2 **/
		
		/*ll total_sadness = 0,days = d;
		
		for(i=0;i<n;i++)
		{
			total_sadness += s[i] * t[i];
		}
		
		ll take[n];
		
		for(i=0;i<n;i++)
		{
			take[i]=0;
		}
		
		while(d>0)
		{
			ll max_sadness_ind = max_element(s,s+n) - s;
			
			//cout<<"s[max]="<<s[max_sadness_ind]<<" d="<<d<<" t[max]"<<t[max_sadness_ind]<<endl;
			
			if(t[max_sadness_ind]>0 && take[max_sadness_ind] < days-di[max_sadness_ind]+1)
			{
				//if(di[max_sadness_ind]<=day)
				//{
					total_sadness -= s[max_sadness_ind];
					
					//cout<<"s[max]="<<s[max_sadness_ind]<<" d="<<d<<" t[max]"<<t[max_sadness_ind]<<endl;
					
					t[max_sadness_ind]--;
					
					take[max_sadness_ind]++;
					
					if(t[max_sadness_ind]==0)
					{
						s[max_sadness_ind] = -1;
					}
					
					//cout<<"s[max]="<<s[max_sadness_ind]<<" d="<<d<<" t[max]"<<t[max_sadness_ind]<<endl;
				//}
			}
			
			d--;
			
		}
		
		cout<<total_sadness<<endl;*/
		
		/** Approach - 3 **/
		
		// Created in new file!
		
	}
}
