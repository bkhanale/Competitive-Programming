#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353

int main() {
  long long n; cin >> n;
  string s; cin >> s;
  vector<long long> v; int cnt = 1;
  for(int i = 1; i < n; i++) {
    if(s[i - 1] != s[i]) {
      v.push_back(cnt);
      cnt = 1;
    } else {
      cnt++;
    }
  }
  v.push_back(cnt);
  long long fi = v[0], la = v[v.size() - 1];
  if(v.size() == 1) cout << (((n * (n + 1)) % MOD) / 2) % MOD << endl;
  else if(s[n - 1] == s[0]) cout << (1 + la + fi + (la * fi) % MOD) % MOD << endl;
  else cout << (la + fi + 1) % MOD << endl;
  return 0;
}
