#include<iostream>
#define ll long long int
using namespace std;
const int mod = 1e9 + 7;
ll fastexp(ll a,ll b,ll n)
{
    ll A[2][2] = {{5 * a + 4 * b,b},{b,a}};
    ll M[2][2] = {{4,5},{1,0}};
    ll u,v,x,y;
    while(n)
    {
        if(n & 1)
        {
            u = (M[0][0]*A[0][0] + M[0][1]*A[1][0]) % mod;
            v = (M[0][0]*A[0][1] + M[0][1]*A[1][1]) % mod;
            x = (M[1][0]*A[0][0] + M[1][1]*A[1][0]) % mod;
            y = (M[1][0]*A[0][1] + M[1][1]*A[1][1]) % mod;
            A[0][0] = u , A[0][1] = v , A[1][0] = x , A[1][1] = y;
        }
        u = (M[0][0]*M[0][0] + M[0][1]*M[1][0]) % mod;
        v = (M[0][0]*M[0][1] + M[0][1]*M[1][1]) % mod;
        x = (M[1][0]*M[0][0] + M[1][1]*M[1][0]) % mod;
        y = (M[1][0]*M[0][1] + M[1][1]*M[1][1]) % mod;
        M[0][0] = u , M[0][1] = v , M[1][0] = x , M[1][1] = y;
        n = n >> 1;
    }
    return A[0][0];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        if(n == 0)
            cout<<a<<endl;
        else if(n == 1)
            cout<<b<<endl;
        else if(n == 2)
            cout<<5 * a + 4 * b<<endl;
        else
            cout<<fastexp(a,b,n-2)<<endl;
    }
}













#include <bits/stdc++.h>
using namespace std;
stringstream ss;
string temp, str;
vector<string> store;
int main(){
	int t;
	cin >> t;
	getchar();
	while(t--){
		getline(cin, temp);
		ss.clear();
		ss << temp;
		vector<string> store;
		while(ss >> str){
			store.push_back(str);
		}
		map<string,int> mp;
		for(int i = 0; i < store.size(); i++){
			mp[store[i]]++;
		}
		int pr = -1;
		bool st = true;
		for(auto it : mp){
			if(pr == -1){
				pr = it.second;
			}
			else{
				if(pr != it.second){
					st = false;
					break;
				}
			}
		}
		if(st){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
} 














#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		while(m--){
			int a, b;
			cin >> a >> b;
		}
		if(n % 2){
			cout << "Odd" << endl;
		}
		else{
			cout << "Even" << endl;
		}
	}
}  
