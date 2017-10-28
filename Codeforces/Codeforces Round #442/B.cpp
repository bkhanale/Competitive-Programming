#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	int sta[l],reva[l],b[l];
	for(int i=0;i<l;i++){
		sta[i] = reva[i] = b[i] = 0;
	}

	for(int i=0;i<l;i++){
		if( !i ){ if( s[i] == 'a' ) sta[i] = 1; }
		else{
			if( s[i] == 'a' ) sta[i] = sta[i-1] + 1;
			else sta[i] = sta[i-1];
		}
	}

	for(int i=0;i<l;i++){
		if( !i ){ if( s[i] == 'b' ) b[i] = 1; }
		else{
			b[i] = b[i-1];
			if( s[i] == 'b' ) b[i]++;
		}
	}

	for(int i=l-1;i>=0;i--){
		if( i == l-1){ if( s[i] == 'a' ) reva[i] = 1; }
		else{
			reva[i] = reva[i+1];
			if( s[i] == 'a' ) reva[i]++;
		}
	}

	int maxi = 0;
	for( int i = -1; i < l; i++ ){
		for(int j=l;j>=0;j--){
			if( j <= i ) break;
			int cnt = 0;
			if( i != -1 ) cnt += sta[i]-b[i];
			if( j != l ) cnt += reva[j];
			if( j != 0 ) cnt += b[j-1];
			if( cnt > maxi ) maxi = cnt;
		}
	}

	cout << maxi << endl;

	return 0 ;
}