#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int MAX = 1e5 + 10;

ll test,n,m;
vector<pii> graph[MAX];
bool visited[MAX];
ll ans;
bool found;

void dfs(ll u,ll v,ll k){
	visited[u]=true;
	if(u==v){
		found=true;
		return;
	}
	
	for(auto &p : graph[u]){
		if(!visited[p.first]){
			if(p.second <= k){
				ans ^= p.second;
			}
			dfs(p.first,v,k);
			if(found) return;
			if(p.second <= k){
				ans ^= p.second;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	cin>>test;
	while(test--){
		cin>>n;
		memset(graph,{},sizeof(graph));
		
		for(ll i=0;i<n-1;i++){
			ll u,v,c;
			cin>>u>>v>>c;
			graph[u].push_back(mp(v,c));
			graph[v].push_back(mp(u,c));
		}
		
		cin>>m;
		
		for(ll i=0;i<m;i++){
			ll u,v,k;
			cin>>u>>v>>k;
			memset(visited,false,sizeof(visited));
			ans = 0;
			found = false;
			dfs(u,v,k);
			cout<<ans<<endl;
		}
	}
}
			
			
			
