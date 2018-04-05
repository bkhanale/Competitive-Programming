#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll M = 1000000009;

ll modpow(ll base, ll exp) {
    base %= M;
    ll res = 1;
    while(exp > 0) {
        if(exp & 1) {
            res = (res * base) % M;
        }
        base = (base * base) % M;
        exp >>= 1;
    }
    return res;
}
 
void multiply(ll F[2][2], ll M[2][2])
{
    ll x =  F[0][0] * M[0][0] + F[0][1] * M[1][0];
    ll y =  F[0][0] * M[0][1] + F[0][1] * M[1][1];
    ll z =  F[1][0] * M[0][0] + F[1][1] * M[1][0];
    ll w =  F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(ll F[2][2], ll n) {
    if( n == 0 || n == 1) {
        return;
    }
    ll M[2][2] = {{1, 1}, {1, 0}};
    power(F, n/2);
    multiply(F, F);
    if(n%2 != 0) {
        multiply(F, M);
    }
}

ll fib(ll n)
{
  ll F[2][2] = {{1, 1}, {1, 0}};
  if (n == 0) {
    return 0;
  }
  power(F, n-1);
  return F[0][0];
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, m;
		cin >> n >> m;
        cout << modpow(n, fib(m + 1)) << endl;
	}
	return 0;
}