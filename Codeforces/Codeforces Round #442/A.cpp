#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
	string s;
	cin>>s;
	ll cnt=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='D')
		{
			if(s[i+1]=='a' && s[i+2]=='n' && s[i+3]=='i' && s[i+4]=='l'){
				cnt++;
			}
		}
		else if(s[i]=='O')
		{
			if(s[i+1]=='l' && s[i+2]=='y' && s[i+3]=='a'){
				cnt++;
			}
		}
		else if(s[i]=='S')
		{
			if(s[i+1]=='l' && s[i+2]=='a' && s[i+3]=='v' && s[i+4]=='a'){
				cnt++;
			}
		}
		else if(s[i]=='A')
		{
			if(s[i+1]=='n' && s[i+2]=='n'){
				cnt++;
			}
		}
		else if(s[i]=='N')
		{
			if(s[i+1]=='i' && s[i+2]=='k' && s[i+3]=='i' && s[i+4]=='t' && s[i+5]=='a'){
				cnt++;
			}
		}
	}
	if(cnt==1)
		cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}