#include <bits/stdc++.h>
using namespace std;

// Approach - 1
// Wrong approach, missed it :(

// int main() {
//   int n; cin >> n;
//   int a[n], b[n]; a[0] = 0;
//   for(int i = 1; i < n; i++) {
//     int x; cin >> x;
//     a[i] = x - 1;
//   }
//   for(int i = 0; i < n; i++) {
//     cin >> b[i];
//   }
//   int pre[n + 1], ans = b[0];
//   memset(pre, -1, sizeof pre);
//   pre[0] = b[0];
//   for(int i = 1; i < n; i++) {
//     if(b[i] != -1) {
//       int tp = i;
//       while(pre[a[tp]] == -1) {
//         tp = a[tp];
//       }
//       // cout << pre[a[tp]] << tp << a[tp] << endl;
//       ans += (b[i] - pre[a[tp]]);
//       if(b[i] - pre[a[tp]] < 0) {
//         cout << -1 << endl;
//         return 0;
//       }
//       pre[i] = b[i];
//     }
//   }
//   cout << ans << endl;
//   return 0;
// }

// Approach - 2

vector<vector<int> > gr(100005);
long long a[100005];
int s[100005];

void dfs(int c, int p) {
  if(s[c] == -1) {
    int mn = INT_MAX;
    for(auto &x : gr[c]) {
      if(x != p) {
        mn = min(mn, s[x]);
      }
    }
    if(mn < s[p]) {
      cout << -1 << endl;
      exit(0);
    }
    if(mn == INT_MAX) mn = s[p];
    s[c] = mn;
  }
  a[c] = s[c] - s[p];
  for(auto &x : gr[c]) {
    if(x != p) {
      dfs(x, c);
    }
  }
}

int main() {
  int n; cin >> n;
  for(int i = 2; i <= n; i++) {
    int x; cin >> x;
    gr[i].push_back(x);
    gr[x].push_back(i);
  }
  for(int i = 1; i <= n; i++) {
    cin >> s[i];
  }
  dfs(1, 0);
  long long ans = 0;
  for(int i = 1; i <= n; i++) {
    ans += a[i];
  }
  cout << ans << endl;
  return 0;
}
