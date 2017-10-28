#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,i;
		cin >> n;
		vector<ll> v(n);
		for(i=0;i<n;i++)
		{
			cin >> v[i];
		}
		ll cnt[4] = {0};
		for(i=0;i<n;i++)
		{
			if(v[i] == 0) cnt[0]++;
			else if(v[i]==1) cnt[1]++;
			else if(v[i]==-1) cnt[2]++;
			else cnt[3]++;
		}
		if(cnt[3] > 1 || (cnt[2] && cnt[3]) || (cnt[2]>1 && !cnt[1]))
			cout << "no" << endl;
		else cout << "yes" << endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}