#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		if(x1 > x2 && y1 == y2)
		{
			cout << "left\n";
		}
		else if(x1 < x2 && y1==y2)
		{
			cout << "right\n";
		}
		else if(y1 > y2 && x1==x2)
		{
			cout << "down\n";
		}
		else if(y1 < y2 && x1==x2)
		{
			cout << "up\n";
		}
		else cout << "sad\n";
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}