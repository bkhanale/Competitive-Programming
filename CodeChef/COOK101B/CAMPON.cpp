#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int d;
    cin >> d;
    int p[35]; memset(p, 0, sizeof p);
    for(int i = 0; i < d; i++) {
      int a, b; cin >> a >> b;
      p[a] = b;
    }
    int ans[35]; memset(ans, 0, sizeof ans);
    ans[0] = p[0];
    for(int i = 1; i < 35; i++) {
      ans[i] = ans[i - 1] + p[i];
      // cout << p[i] << " " << ans[i] << endl;
    }
    int q; cin >> q;
    for(int i = 0; i < q; i++) {
      int a, b; cin >> a >> b;
      if(ans[a] >= b) cout << "Go Camp\n";
      else cout << "Go Sleep\n";
    }
  }
  return 0;
}
