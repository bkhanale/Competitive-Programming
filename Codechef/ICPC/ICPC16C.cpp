#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll d,sum=0;
		cin >> d;
		d++;
		while(d/10 > 0)
		{
			sum = 0;
			while(d)
			{
				sum += (d%10);
				d /= 10;
			}
			d = sum;
		}
		cout << d << endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}