#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	if (n%2==0) cout<<n/2+n/2+n/2<<endl;
	else cout<<n/2+n/2+n/2+1<<endl;
	for (int i=1;i<=n;i++) if (i%2==0) cout<<i<<' ';
	for (int i=1;i<=n;i++) if (i%2!=0) cout<<i<<' ';
	for (int i=1;i<=n;i++) if (i%2==0) cout<<i<<' ';
	return 0;
}