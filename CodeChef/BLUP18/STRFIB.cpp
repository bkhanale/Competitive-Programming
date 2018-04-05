#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1000000007;

void multiply(ll F[2][2], ll M[2][2])
{
    ll x =  (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % MOD;
    ll y =  (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % MOD;
    ll z =  (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % MOD;
    ll w =  (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % MOD;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(ll F[2][2], ll n, ll f0, ll f1) {
    if( n == 0 || n == 1) {
        return;
    }
    ll M[2][2] = {{5 * f0 + 4 * f1, f1}, {f1, f0}};
    power(F, n/2, f0, f1);
    multiply(F, F);
    if(n%2 != 0) {
        multiply(F, M);
    }
}

ll fib(ll n, ll f0, ll f1)
{
  ll F[2][2] = {{4, 5}, {1, 0}};
  if (n == 0) {
    return 0;
  }
  power(F, n-1, f0, f1);
  return F[0][0];
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll f0, f1, N;
		cin >> f0 >> f1 >> N;
        cout << fib(N - 2, f0, f1) << endl;
	}
	return 0;
}