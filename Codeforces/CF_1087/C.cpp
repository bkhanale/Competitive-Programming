#include <bits/stdc++.h>
using namespace std;

// Approach-1: I'm stupid!!!

// int ans1 = INT_MAX;
// int ans2 = INT_MAX;
//
// bool vis[1003][1003];
//
// bool val(int a, int b, int c, int d) {
//   if(a >= 0 && b >= 0 && !vis[a][b] && a <= c && b <= d) {
//     vis[a][b] = true;
//     return true;
//   }
//   return false;
// }
//
// void dfs1(int a, int b, int qa, int qb, int cnt) {
//   cout << a << " " << b << endl;
//   if(a == qa && b == qb) {
//     ans1 = min(ans1, cnt);
//     return;
//   }
//   if(val(a + 1, b, qa, qb)) dfs1(a + 1, b, qa, qb, cnt + 1);
//   if(val(a, b + 1, qa, qb)) dfs1(a, b + 1, qa, qb, cnt + 1);
//   if(val(a - 1, b, qa, qb)) dfs1(a - 1, b, qa, qb, cnt + 1);
//   if(val(a, b - 1, qa, qb)) dfs1(a, b - 1, qa, qb, cnt + 1);
// }
//
// void dfs2(int a, int b, int qa, int qb, int cnt) {
//   if(a == qa && b == qb) {
//     ans2 = min(ans2, cnt);
//     return;
//   }
//   if(val(a + 1, b, qa, qb)) dfs2(a + 1, b, qa, qb, cnt + 1);
//   if(val(a, b + 1, qa, qb)) dfs2(a, b + 1, qa, qb, cnt + 1);
//   if(val(a - 1, b, qa, qb)) dfs2(a - 1, b, qa, qb, cnt + 1);
//   if(val(a, b - 1, qa, qb)) dfs2(a, b - 1, qa, qb, cnt + 1);
// }
//
// int main() {
//   int xa, ya; cin >> xa >> ya;
//   int xb, yb; cin >> xb >> yb;
//   int xc, yc; cin >> xc >> yc;
//   memset(vis, false, sizeof(vis[0][0]) * 1003 * 1003);
//   dfs1(xa, ya, xb, yb, 1);
//   memset(vis, false, sizeof(vis[0][0]) * 1003 * 1003);
//   dfs2(xb, yb, xc, yc, 1);
//   cout << ans1 + ans2 - 1 << endl;
//   return 0;
// }

// Approach-2

int main() {
  int xa, ya; cin >> xa >> ya;
  int xb, yb; cin >> xb >> yb;
  int xc, yc; cin >> xc >> yc;
  vector<pair<int, int> > v;
  if(xa > xb) swap(xa, xb), swap(ya, yb);
  if(xb > xc) swap(xb, xc), swap(yb, yc);
  if(xa > xb) swap(xa, xb), swap(ya, yb);
  for(int i = xa; i < xb; i++) v.push_back(make_pair(i, ya));
  for(int i = min({ya, yb, yc}); i <= max({ya, yb, yc}); i++) v.push_back(make_pair(xb, i));
  for(int i = xb + 1; i <= xc; i++) v.push_back(make_pair(i, yc));
  cout << v.size() << endl;
  for(auto i: v) cout << i.first << " " << i.second << endl;
  return 0;
}
