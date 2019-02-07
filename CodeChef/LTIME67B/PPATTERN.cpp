#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int ans[n][n];
    int a = 0, b = 0, x = 0;
    for(int i = 1; i <= n * n; i++) {
      ans[a][b] = i;
      // cout << a << " " << b << " " << i << endl;
      if(b == x) {
        if(a % n == n - 1) {
          a = x + 1;
          b = n - 1;
          x = x + 1;
        } else {
          b = a + 1;
          a = 0;
        }
      }
      else {
        a++; b--;
      }
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cout << ans[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
