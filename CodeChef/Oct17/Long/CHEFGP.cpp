#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll x,y;
		cin>>x>>y;
		ll na=0,nb=0;
		for(ll i=0;i<s.length();i++)
		{
			if(s[i]=='a')
				na++;
			else nb++;
		}
		ll cnta=0,cntb=0;
		while(na>0 && nb>0)
		{
			if(na==nb)
			{
				if(cnta!=x)
				{
					for(ll i=0;i<na;i++)
					{
						cout<<"ab";
						na--;nb--;
					}
				}
				else if(cnta==x && cntb!=y){
					for(ll i=0;i<na;i++)
					{
						cout<<"ba";
						na--;nb--;
					}
				}
				else
				{
					if(na>nb)
					{
						cout<<"*a";
						cnta=1;cntb=0;
						na--;
					}else{
						cout<<"*b";
						cnta=0;cntb=1;
						nb--;
					}
				}
			}
			else if(na>nb)
			{
				if(cnta!=x)
				{
					cout<<"a";
					cnta++;cntb=0;
					na--;
				}
				else if(cnta==x && cntb!=y)
				{
					cout<<"b";
					cnta=0;cntb++;
					nb--;
				}
				else{
					cout<<"*a";
					cnta=1;cntb=0;
					na--;
				}
			}
			else{
				if(cntb!=y)
				{
					cout<<"b";
					cnta=0;cntb++;
					nb--;
				}
				else if(cntb==y && cnta!=x)
				{
					cout<<"a";
					cnta++;cntb=0;
					na--;
				}
				else{
					cout<<"*b";
					cntb=1;cnta=0;
					nb--;
				}
			}
		}
		if(na!=0)
		{
			while(na>0)
			{
				if(cnta!=x)
				{
					cout<<"a";
					cnta++;cntb=0;
					na--;
				}
				else{
					cout<<"*a";
					cnta=1;cntb=0;
					na--;
				}
			}
		}
		else{
			while(nb>0)
			{
				if(cntb!=y)
				{
					cout<<"b";
					cntb++;cnta=0;
					nb--;
				}
				else{
					cout<<"*b";
					cntb=1;cnta=0;
					nb--;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}




