#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string s;
	while(getline(cin,s)){
		//cout<<"s="<<s<<endl;
		ll tA=0,tB=0,flag=0;
		for(ll i=0;i<10;i++){
			if(i%2==0){
				tA+=s[i]-'0';
				if(tA>tB+((9-i)/2)+1){
					cout<<"TEAM-A "<<i+1<<endl;flag=1;
					break;
				}
				else if(tB>tA+(9-i)/2){
					cout<<"TEAM-B "<<i+1<<endl;flag=1;
					break;
				}
			}else{
				tB+=s[i]-'0';
				if(tA>tB+(9-i)/2){
					cout<<"TEAM-A "<<i+1<<endl;flag=1;
					break;
				}
				else if(tB>tA+(9-i)/2){
					cout<<"TEAM-B "<<i+1<<endl;flag=1;
					break;
				}
			}
		}
		//cout<<"tA="<<tA<<" tB="<<tB<<endl;
		if(flag==0){
			for(ll i=10;i<=19;i++){
				if(i%2==0){
					tA+=s[i]-'0';
				}else{
					tB+=s[i]-'0';
					if(tA>tB){
						cout<<"TEAM-A "<<i+1<<endl;flag=1;
						break;
					}
					else if(tB>tA){
						cout<<"TEAM-B "<<i+1<<endl;flag=1;
						break;
					}
				}
			}
		}
		if(flag==0){
			cout<<"TIE\n";
		}
	}
	return 0;
} 