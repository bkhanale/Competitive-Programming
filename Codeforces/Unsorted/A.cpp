#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	string a,b;
	cin>>a>>b;
	string ans="";
	ans+=a[0];
	for(ll i=1;i<a.size();i++){
		if(a[i]<b[0]){
			ans+=a[i];
		}else{
			ans+=b[0];
			cout<<ans<<endl;
			return 0;
		}
	}
	ans+=b[0];
	cout<<ans<<endl;
	return 0;
}