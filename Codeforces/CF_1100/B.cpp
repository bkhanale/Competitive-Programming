#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[m];
  for(int i = 0; i < m; i++) {
    cin >> a[i];
  }
  int j = 0; map<int, int> mp;
  string ans = "";
  for(int i = 0; i < m; i++) {
    if(mp[a[i]] == 0) {
      j++;
    }
    mp[a[i]]++;
    if(j == n) {
      ans += '1';
      for(int k = 1; k <= n; k++) {
        mp[k]--;
        if(mp[k] == 0) j--;
      }
    } else ans += '0';
  }
  cout << ans << endl;
  return 0;
}
