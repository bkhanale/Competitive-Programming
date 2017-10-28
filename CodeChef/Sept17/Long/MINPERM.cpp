#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		int p[n];
		for(int i=0;i<n;i++)
		{
			p[i] = i;
		}
 
		for(int i=0;i<n;i++)
		{
			if(p[i] == i)
			{
				if(i == n-1)
				{
					swap(p[i-1],p[i]);
				}
				else{
					swap(p[i],p[i+1]);
				}
			}
		}
 
		for(int i=0;i<n;i++)
		{
			cout << p[i]+1 << " ";
		}
		cout<<endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}