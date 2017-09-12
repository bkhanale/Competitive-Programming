#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll coal[n],i;
		for(i=0;i<n;i++)
		{
			cin>>coal[i];
		}
		ll tax[n-1];
		for(i=0;i<n-1;i++)
		{
			cin>>tax[i];
		}
		ll policy[n-1];
		for(i=0;i<n-1;i++)
		{
			cin>>policy[i];
		}

		ll kg=coal[0], red=0, profit=0, ans=coal[0];

		for(i=1;i<n;i++)
		{
			kg += coal[i];
			if(policy[i-1] == 1)
				red += tax[i-1];
			else red += 2*tax[i-1];

			profit = kg - red;

			ans = max(ans,profit);
		}
		cout << ans << endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}