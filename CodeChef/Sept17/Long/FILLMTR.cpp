
// Approach: 1

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,q,j,k,val;
	cin>>t;
	int i = 0;
	while(i<t)
	{
		cin>>n>>q;
		vector<vector<int>> arr(n,vector<int>(n,-1));
		bool flag = 0;
		for(int m = 0;m<q;m++)
		{
			cin>>j>>k>>val;
			arr[j-1][k-1] = val;
			if(j == k && val != 0)
			{
				flag = 1;
				break;
			}
			if(arr[k-1][j-1] != -1 && arr[k-1][j-1] != val)
			{
				flag = 1;
				break;
			}
			for(int l = 0;l<n;l++)
			{
				if(l == j-1 || l == k-1)continue;
				if(arr[j-1][l] != -1 && arr[k-1][l] != -1)
				{
					int sum = arr[j-1][k-1] + arr[j-1][l] + arr[k-1][l];
					if(sum%2 != 0)
					{
						flag = 1;
						break;
					}
				}
			}
			arr[k-1][j-1] = val;
			if(flag == 1)break;
		}
		i++;
		if(flag == 1)
		{
			cout<<"no"<<endl;
			continue;
		}
		cout<<"yes"<<endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}*/

// Approach: 2

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,q;
		scanf("%d %d",&n,&q);
		int arr[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				arr[i][j] = -1;
		for(int i=0;i<q;i++)
		{
			int x,y,z;
			scanf("%d %d %d",&x,&y,&z);
			arr[x-1][y-1] = z;
		}
		int fl = 0;
		int a[n] = {-1};
		for(int i=0;i<n;i++)
			for (int j=0;j<n;j++)
			{
				if(arr[i][j]!=-1 && arr[j][i]!=-1 && arr[i][j]!=arr[j][i])
					{fl=1;break;}
				if(a[i] != -1 && a[j]!=-1)
				{
					if(arr[i][j] == 1||arr[j][i] ==1)
					{
						if(abs(a[i]-a[j])!=1)
							fl=1;
						
					}
					else
					{
						if(a[i]!=a[j])
							fl=1;
					}
				}
				else if(a[i]==-1 || a[j]==-1)
				{

				}
			}
		if(fl==0)
			printf("yes\n");
		else
			printf("no\n");
	}

	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}
*/

// Approach: 3

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 100001

vector<pair<ll,ll> > BHUS[MAX];
ll vis[MAX];
ll ans[MAX];
ll n;

bool check(int i, bool v)
{
    if(vis[i])
    {
        return true;
    }
    
    vis[i] = true; ans[i] = v;
    bool flag=true;

    for(int j=0;j<BHUS[i].size();j++)
    {
        if(vis[BHUS[i][j].first])
        {
            if(ans[BHUS[i][j].first] ^ ans[i] ^ BHUS[i][j].second)
            {
                return false;
            }
        }
        else{
            flag &= check(BHUS[i][j].first, v ^ BHUS[i][j].second);
        }
    }
    return flag;
}

int main()
{
    ll t;
    cin>>t;

    map<pair<ll,ll>,ll> mapp;

    while(t--)
    {
    	ll i, j, k, val, q;
    	bool flag = true;
        mapp.clear();

        cin >> n >> q;

        for(i=0;i<n+1;i++)
        {
            vis[i]=false,BHUS[i].clear();
        }

        for(i=0;i<q;i++)
        {
            cin >> j >> k >> val;
            if(mapp.find(make_pair(k,j)) != mapp.end())
            {
                if(mapp[make_pair(k,j)]!=val)
                {
                    flag=false;
                }
            }
            else
            {
                mapp[make_pair(j,k)] = val;

                BHUS[j].push_back(make_pair(k,val));

                BHUS[k].push_back(make_pair(j,val));

            }
            if(j==k && val!=0)
            {
                flag=false;            
            }
        }
        if(!flag)
        {
            cout<<"no"<<endl;
            continue;
        }

        for(i=0;i<n+1;i++)
        {
            flag &= check(i,0);
        }

        if(flag)
        {
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

    std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
    return 0;
}

