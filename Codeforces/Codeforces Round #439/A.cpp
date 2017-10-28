#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll cnt=0;
	map<int,int>m;
	int n;
	cin>>n;
	int a[n=3],b[n+3];
	for(int i=0;i<n;i++) { cin>>a[i]; m[a[i]]=1; }
	for(int i=0;i<n;i++) { cin>>b[i]; m[b[i]]=1; }
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x=a[i]^b[j];
			if(m[x]) cnt++;
		}
	}
	if(cnt&1)
	cout<<"Koyomi";
	else
	cout<<"Karen";
	return 0;
}