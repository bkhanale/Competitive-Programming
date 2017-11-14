#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
vector<vector<ll> > edges(100005);
vector<ll> bank(100005);
ll n,m,mx,mx1,cnt;
 
void DFS_Help(bool visit[],ll s,ll chk){
	visit[s]=true;
	//cout<<"s="<<s<<endl;
	if(bank[s]==1){
		chk=1;
	}
	//cout<<"chk="<<chk<<endl;
	if(chk==1){
		if(s>mx){
			mx1=mx;
			mx=s;
		}
		else if(s>mx1 && s!=mx){
			mx1=s;
		}
		cnt++;
	}
	//cout<<"count="<<cnt<<endl;
	for(ll i=0;i<edges[s].size();i++){
		if(!visit[edges[s][i]]){
			DFS_Help(visit,edges[s][i],chk);
		}
	}
}
 
ll DFS(ll src){
	bool visit[n+1];
	for(ll i=0;i<n+1;i++){
		visit[i]=false;
	}
	mx=0;mx1=0;cnt=0;ll chk=0;
	DFS_Help(visit,src,chk);
	if(cnt<2){
		return -1;
	}else{
		return mx1;
	}
}
 
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(ll i=0;i<=n;i++){
			edges[i].clear();
		}
		bank.clear();
		edges.resize(n+1);
		bank.resize(n+1);
		for(ll i=0;i<n-1;i++){
			ll u,v;
			cin>>u>>v;
			edges[u].push_back(v);
			edges[v].push_back(u);
		}
		for(ll i=0;i<m;i++){
			ll type,c;
			cin>>type>>c;
			if(type==1){
				bank[c]=1;
			}else{
				cout<<DFS(c)<<endl;
			}
		}
	}
	return 0;
} 