#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n],i;
		ll pre[n], suf[n], sum=0;

		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum += a[i];
			pre[i] = sum;
		}
		sum = 0;
		for(i=n-1;i>=0;i--)
		{
			sum += a[i];
			suf[i] = sum;
		}

		ll ans = pre[0] + suf[0];
		ll ans_ = 0;

		for(i=1;i<n;i++)
		{
			if(pre[i] + suf[i] < ans)
			{
				ans = pre[i] + suf[i];
				ans_ = i;
			}
		}
		cout << ans_+1 << endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}