#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n], mn = 101, mx = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }
  int ans1 = 0, ans2 = INT_MAX;
  for(int i = mn; i <= mx; i++) {
    int cnt = 0;
    for(int j = 0; j < n; j++) {
      if(abs(a[j] - i) > 1) {
        cnt += abs(a[j] - i) - 1;
      }
    }
    if(cnt < ans2) {
      ans2 = cnt; ans1 = i;
    }
  }
  cout << ans1 << " " << ans2 << endl;
  return 0;
}
