/*

Approach-1

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct data
{
    ll type;
    ll li;
    ll ri;
};

void increment(vector<ll> &a, ll li, ll ri)
{
    for(ll i = li-1;i<=ri-1;i++){
        a[i]++;
    }
}

void execute(vector<data> &c, vector<ll> &b, ll li, ll ri)
{
    for(ll i = li-1;i<=ri-1;i++)
    {
        if(c[i].type == 1)
        {
            increment(b, c[i].li, c[i].ri);
        }

        else if(c[i].type == 2){
            execute(c, b, c[i].li, c[i].ri);
        }
    }
}

int main()
{
	ll t, i;
	cin >> t;
	while(t--)
	{
		ll n, m;
		cin >> n >> m;

		vector<ll> a(n);
        vector<data> list(m);

		for(i=0;i<m;i++)
		{
			cin >> list[i].type >> list[i].li >> list[i].ri;
		}

		for(i=0;i<m;i++)
		{
			if(list[i].type == 1)
			{
				increment(a, list[i].li, list[i].ri);
			}else{
				execute(list, a, list[i].li, list[i].ri);
			}
		}

		for(i=0;i<n;i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
    return 0;
}
*/

// Approach-2
#include <bits/stdc++.h>

#define ll long long
#define vl vector<ll>
#define fi first
#define se second
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define mod	1000000007

using namespace std;

int query(int q, int l, int r, int pos, ll tree[], ll add[])
{
	if(q < l || q > r)
		return 0;
	if( l == r )
	{ 
		ll a = (tree[pos]%mod+add[pos]%mod)%mod;
		return a;
	}
	int m = l + (r-l)/2;
	ll ans = add[pos]%mod + query( q, l, m, pos*2+1, tree, add )%mod + query( q, m+1, r, pos*2+2, tree, add )%mod;
	ans %= mod;
	return ans;
}


void update(int ql, int qr, int l, int r, int pos, ll tree[], ll add[], int cnt)
{
	if( qr < l || ql > r )
		return;
	if( l >= ql && r <= qr )
	{
		add[pos] = (add[pos]%mod + cnt%mod)%mod;
		return; 
	}
	int m = (l+r)/2;
	update(ql, qr, l, m, pos*2+1, tree, add, cnt);
	update(ql, qr, m+1, r, pos*2+2, tree, add, cnt);
}

ll treeInit(int q, int l, int r, int pos, ll tree[])
{
	if( l > r )
		return 0;
	if( q < l || q > r )
		return 0;
	if( l == r )
	{ 
		tree[pos] = tree[pos] + 1;
		tree[pos] %= mod;
		return tree[pos];
	}
	int m = (l+r)/2;
	tree[pos] = treeInit(q, l, m, pos*2+1, tree) % mod + treeInit(q, m+1, r, pos*2+2, tree) % mod;
	tree[pos] %= mod;
	return tree[pos];
}

int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(0);
		int test;
		cin >> test;
		while(test--)
		{
			int n, m;
			cin >> n >> m;

			ll tree[4*m];
			ll add[4*m];
			ll qtime[m];
			ll bhu = 0;
			ll change_[n+4];
			memset(change_,0,sizeof(change_));
			memset(qtime,0,sizeof(qtime));
			memset(tree,0,sizeof(tree));
			memset(add,0,sizeof(add));

			vector<int> tt;
			vector<pair<int,pair<int,int> > > q;

			for(int i=0;i<m;i++)
			{
				int t,l,r;
				cin >> t >> l >> r;
				l--;
				r--; 
				q.pb(mp(t,mp(l,r)));

				if( t == 2 )
				{
					tt.pb(i);
				}
				treeInit(i, 0, m-1, 0, tree);
			}

			for(int i=tt.size()-1;i>=0;i--)
			{
				ll cnt = query(tt[i], 0, m-1, 0, tree, add);
				int l, r;
				l = q[tt[i]].second.first;
				r = q[tt[i]].second.second;
				update(l, r, 0, m-1, 0, tree, add, cnt);

			}

			for(int i=0;i<m;i++)
			{
				qtime[i] = query(i, 0, m-1, 0, tree, add);
			}

			for(int i=0;i<m;i++)
			{
				if(q[i].first == 2)
				{
					continue;
				}

				change_[q[i].second.first] += qtime[i];
				change_[q[i].second.first] %= mod;
				change_[q[i].second.second+1] -= qtime[i];
				if(change_[q[i].second.second+1] < 0)
				{
					change_[q[i].second.second+1] += mod;
				}
				change_[q[i].second.second+1] %= mod;
			}

			for(int i=0;i<n;i++)
			{
				bhu = (bhu % mod + change_[i] % mod) % mod;
				cout << bhu << " ";
			}
			cout << endl;
		}		
		return 0 ;
	}