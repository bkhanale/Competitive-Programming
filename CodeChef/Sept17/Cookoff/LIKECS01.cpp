#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;
#define pair<ll,ll> pii;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        int a[26]={0},flag=0;
        for(int i=0;i<s.length();i++)
            a[s[i]-'a']++;
        for(int i=0;i<26;i++)
            if(a[i]>=2)
            flag=1;
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
	}
	return 0;
}