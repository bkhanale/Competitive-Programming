#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll n = s.length(),Apos=0,Bpos=0,cntD=0,cntA=0,cntB=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i] == 'A')
			{
				cntA++;
				if(Apos==1)
				{
					cntA+=cntD;
					cntD=0;
				}
				else{
					cntD=0;
				}
				Apos = 1;
				Bpos = 0;
			}
			else if(s[i] == 'B')
			{
				cntB++;
				if(Bpos==1)
				{
					cntB+=cntD;
					cntD=0;
				}
				else{
					cntD=0;
				}
				Bpos = 1;
				Apos = 0;
			}
			else if(s[i] == '.')
			{
				cntD++;
			}
		}
		cout<<cntA<<" "<<cntB<<endl;
	}
	return 0;
} 