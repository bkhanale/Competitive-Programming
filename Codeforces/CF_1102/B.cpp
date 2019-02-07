#include <bits/stdc++.h>
using namespace std;

// Previous solution was hacked,
// so improved the code to pass all tests

int main() {
  int n, k; cin >> n >> k;
  vector<int> v[5001];
  int mx = 0, mx2 = 0;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    v[x].push_back(i);
    mx2 = max(mx2, x);
  }
  for(int i = 1; i <= mx2; i++) {
    mx = max(mx, (int)v[i].size());
  }
  if(k < mx) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    int ans[n], cnt = 1;
    for(int i = 1; i <= mx2; i++) {
      for(auto j : v[i]) {
        ans[j] = cnt++;
        if(cnt > k) cnt = 1;
      }
    }
    for(int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
