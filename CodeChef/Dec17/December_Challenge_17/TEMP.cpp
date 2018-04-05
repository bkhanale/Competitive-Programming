#include <iostream>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt","w",stdout);
	ll testcases=(rand()%100)+1;
	cout<<testcases<<endl;
	while(testcases--){
		ll x=rand()%100000;
		ll y=rand()%100000;
		ll z=rand()%100000;
		ll a=rand()%100000;
		ll b=rand()%100000;
		ll c=rand()%100000;
		cout<<x<<" "<<y<<" "<<z<<" "<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
