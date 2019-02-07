#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1000000007;

int main() {
  int t;
  cin >> t;
  ll po[100005]; po[0] = 1;
  for(int i = 1; i < 100005; i++) {
    po[i] = (po[i - 1] * 10) % mod;
  }
  while(t--) {
    string s; cin >> s;
    int n = s.length();
    ll num = 0;
    for(int i = 0; i < n; i++) {
      num = ((num * 10) % mod + s[i] - '0') % mod;
    }
    ll a = 0;
    for(int i = 0; i < n; i++) {
      a = ((a * po[n]) % mod + num) % mod;
      ll x = ((s[i] - '0') * po[n - 1]) % mod;
      num = ((num - x + mod) * 10) % mod;
      num = (num + s[i] - '0') % mod;
    }
    cout << a << endl;
  }
  return 0;
}
