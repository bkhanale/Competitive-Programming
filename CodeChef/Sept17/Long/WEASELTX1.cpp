#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <stdio.h>
#include <queue>
#include <set>
#include <list>
#include <cmath>
#include <assert.h>
#include <bitset>
#include <cstring>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <iomanip> //cout << setprecision(node) << fixed << num
 
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define print(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef std::pair <int, int> ii;
typedef std::vector <int> vi;
typedef std::vector <ll> vll;
const int INF = int(1e9);
const ll INF64 = ll(1e18);
const ld EPS = 1e-9, PI = 3.1415926535897932384626433832795;
using namespace std;
 
const int maxn = 2e5+7;
vector <vi> tree;
vector <ll> vals, mod_vals;
 
int main() {
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
	#endif
	int N, Qq, u, v;
	scanf("%d %d", &N, &Qq);
	tree.resize(N);
	vals.resize(N);
	mod_vals.resize(N);
	for (int i = 0; i < N-1; i++) {
		scanf("%d %d", &u, &v);
		tree[u].pb(v);
		tree[v].pb(u);
	}
	ll first = 0;
	for (int i = 0; i < N; i++) {
		scanf("%lld", &vals[i]);
		mod_vals[i] = vals[i];
		first = first ^ vals[i];
	}
	queue <ii> Q;
	Q.push(mp(0, 0));
	bitset<maxn> viz;
	viz[0] = true;
	vector <ll> layers(1, 0);
	while (!Q.empty()) {
		ii p = Q.front();
		Q.pop();
		int curr = p.x, idx = p.y;
		if (idx >= layers.size()) layers.pb(0);
		layers[idx] = layers[idx] ^ vals[curr];
		for (int adj : tree[curr]) {
			if (!viz[adj]) {
				viz[adj] = true;
				Q.push(mp(adj, idx + 1));
			}
		}
	}
	vector <ll> mod_layers = layers;
	int len = layers.size();
	int rep = pow(2,ceil(log2(len)));
	vll ans;
 
	vi size(rep+7);
	for (int i = 0; i <= rep; i++) {
		size[i] = pow(2,ceil(log2(i+1)));
	}
	int final_size = pow(2, ceil(log2(sqrt(N))));
	vector <vector <ll>> pre (7+rep);
	pre[0] = layers;
	ans.pb(first);
	for (int i = 1; i <= rep; i++) {
		vll iter;
		int block_size = size[i], prev = i - block_size/2;
		if (prev < 0) assert(false);
		int prev_size = size[prev];
		ll tot = 0;
		for (int j = 0; j < len; j += block_size) {
			ll block = 0;
			for (int k = j; k < (j + block_size/2); k += prev_size) {
				int idx = k/prev_size;
				if (idx < pre[prev].size())	block = block ^ pre[prev][idx];
			}
			iter.pb(block);
			tot = tot ^ block;
		}
		pre[i] = iter;
		ans.pb(tot);
	}
	ll d;
	for (int i = 0; i < Qq; i++) {
		scanf("%lld", &d);
		d = d % rep;
		if (d == 0) printf("%lld\n", vals[0]);
		else printf("%lld\n", ans[d-1]);
		assert(ans[d-1] >= 0);
	}
}  