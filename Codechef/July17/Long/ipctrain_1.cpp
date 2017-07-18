#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int MAX = 212345;

int n,d,i;

multiset<pii> q;

vector<pii> s[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	int test;
	cin>>test;
	while(test--)
	{
		cin>>n>>d;
		
		for(i=0;i<n;i++)
		{
			int day,t,sad;
			cin>>day>>t>>sad;
			s[day].push_back(pii(-sad,t));
		}
		
		for(i=1;i<=d;i++)
		{
			for(pii ev:s[i])
			{
				q.insert(ev);
			}
			
			s[i].clear();
			if(!q.empty())
			{
				pii top = *q.begin();
				q.erase(q.begin());
				top.second--;
				if(top.second != 0)
				{
					q.insert(top);
				}
			}
			
		}
		
		ll res = 0;
		while(!q.empty())
		{
			pii top = *q.begin();
			res += ((ll)-top.first)*top.second;
			q.erase(q.begin());
		}
		
		cout<<res<<endl;
		
	}
	return 0;
}
