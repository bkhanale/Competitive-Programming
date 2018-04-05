#include<bits/stdc++.h>
#define MOD 1000000007
#define llint long long int
#define max(a,b) (a>=b?a:b)
#define min(a,b) (a<=b?a:b)
using namespace std;

struct point{
ll x;
ll y;
};

map< pair<ll,ll>,ll >  mp;point arr[100001];ll N;

pair<ll,ll> give_slope(ll i,ll j)
{
	pair<ll,ll> slope;slope.first =  arr[i].y - arr[j].y;slope.second = arr[i].x - arr[j].x;ll gcd = __gcd(slope.first,slope.second);
	if(gcd!=0){
		slope.first/=gcd; slope.second/=gcd;
	}
	if(slope.first*slope.second<0){
		if(slope.first>0){
			slope.first*=-1; slope.second*=-1;
		}
	}
	return slope;
}

bool okay(vector<ll> line){
	if(line.size()<=1){
		return true;
	}
	pair<ll,ll> allowed_slope = give_slope(line[0],line[1]);
	for(ll i=1;i<line.size();i++){
		pair<ll,ll> slope = give_slope(line[i],line[0]);
		if((slope.first!=allowed_slope.first)||(slope.second!=allowed_slope.second)){
			return false;
		}
	}
	return true;
}

int main(){
	cin>>N;
	for(int i = 1; i <= N; i++) {
		ll xc, yc; cin >> xc >> yc; arr[i].x = xc; arr[i].y = yc;
	}
	for(ll i = 2; i <= N; i++) {
		pair<ll, ll> slope = give_slope(i, 1); mp[slope]++;
	}
	map<pair<ll, ll>, ll> :: iterator x = max_element(mp.begin(), mp.end(), [](const pair<pair<ll, ll>,ll>& p1, const pair<pair<ll, ll>,ll>& p2) {return p1.second < p2.second;});
	pair<ll,ll> max_slope = x->first;vector<ll> line1,line2;line1.push_back(1);
	for(ll i = 2;i <= N; i++) {
		pair<ll,ll> slope = give_slope(i,1);
		if(slope.first==max_slope.first&&slope.second==max_slope.second){
			line1.push_back(i);
		}
		else{
			line2.push_back(i);
		}
	}
	if(okay(line1)&&okay(line2)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}