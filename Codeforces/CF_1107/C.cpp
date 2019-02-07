#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  string s; cin >> s;
  vector<int> v[200005];
  v[0].push_back(a[0]);
  int j = 0;
  for(int i = 1; i < n; i++) {
    if(s[i] != s[i - 1]) {
      j++;
      v[j].push_back(a[i]);
    } else {
      v[j].push_back(a[i]);
    }
  }
  long long ans = 0;
  for(int i = 0; i <= j; i++) {
    sort(v[i].begin(), v[i].end());
    int cnt = 0;
    for(int j = v[i].size() - 1; j >= 0; j--) {
      // cout << v[i][j] << endl;
      if(cnt < k) {
        ans += v[i][j];
        cnt++;
      }
      else break;
    }
  }
  cout << ans << endl;
  return 0;
}
