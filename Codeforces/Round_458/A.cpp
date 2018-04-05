#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPerfectSquare(long long n){
    double guess = sqrt(n);
    long long r = std::floor(guess);
    if(r*r == n) return true;
    else {
        r = std::ceil(guess);
        return r*r == n;
    }
}

int main() {
	ll n;
	cin >> n;
	ll a[n];
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for(ll i = n - 1; i >= 0; i--) {
		if(!isPerfectSquare(a[i])) {
			cout << a[i] << endl;
			break;
		}
	}
	return 0;
}