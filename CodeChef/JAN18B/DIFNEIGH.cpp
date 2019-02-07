#include <bits/stdc++.h>
using namespace std;

int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int t; cin >> t;
  cout << t << endl;
  while(t--) {
    int n, m; cin >> n >> m;
    int ans[n][m], mx = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(i % 2 == 0) {
          ans[i][j] = (j / 2 + 1) % 5;
        } else {
          if(j == 0) ans[i][j] = 2;
          else if(j == 1 || j == 2) ans[i][j] = 3;
          else ans[i][j] = ((j - 1) / 2) % 5;
        }
        mx = max(mx, ans[i][j]);
      }
    }
    cout << mx << endl;
    cout << n << " " << m << endl;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cout << ans[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
