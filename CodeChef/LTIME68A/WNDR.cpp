#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
  int t; cin >> t;
  while(t--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int> > g(n + 1);
    for(int i = 0; i < m; i++) {
      int x, y; cin >> x >> y;
      g[x].push_back(y);
      g[y].push_back(x);
    }
    int q, fl = 0; cin >> q;
    vector<int> node(k + 1, -1);
    for(int i = 0; i < q; i++) {
      int x, y; cin >> x >> y;
      if(node[y] != -1 && node[y] != x) {
        fl = 1;
      }
      node[y] = x;
    }
    if(fl) {
      cout << 0 << endl;
      continue;
    }
    vector<long long> dp(n + 1);
    dp[1] = 1;
    for(int i = 0; i <= k; i++) {
      if(node[i] != -1) {
        for(int j = 1; j <= n; j++) {
          if(node[i] != j) {
            dp[j] = 0;
          }
        }
      }
      if(i == k) break;
      vector<long long> new_dp = dp;
      for(int i = 1; i <= n; i++) {
        for(auto j: g[i]) {
          new_dp[j] = (new_dp[j] + dp[i]) % MOD;
        }
      }
      swap(dp, new_dp);
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++) {
      ans = (ans + dp[i]) % MOD;
    }
    cout << ans << endl;
  }
  return 0;
}
