#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

string ss(string num)
{
	if(num.length()==1){
		return num;
	}
	ll sum=0;string n=num;
	string sum1;
	for(ll i=0;i<n.length();i++)
	{
		sum+=(n[i]-'0');
	}
	sum1=to_string(sum);
	return ss(sum1);
}

int main()
{
	string n;
	ll k;
	cin>>n>>k;
	ll sum=0;
	string sum1;
	for(ll i=0;i<n.length();i++)
	{
		sum+=(n[i]-'0');
	}
	sum*=k;
	sum1=to_string(sum);
	//cout<<sum<<endl;
	cout<<ss(sum1)<<endl;
	return 0;
}