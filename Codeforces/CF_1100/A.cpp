#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int a[n], tot = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    tot += a[i];
  }
  int ans = 0;
  for(int i = 0; i < k; i++) {
    int cnt = 0;
    for(int j = i; j < n; j += k) {
      cnt += a[j];
    }
    ans = max(ans, abs(tot - cnt));
  }
  cout << ans << endl;
  return 0;
}
