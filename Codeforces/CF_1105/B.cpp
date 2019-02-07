#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string s; cin >> s;
  vector<int> v[26];
  int cnt = 1;
  for(int i = 1; i < n; i++) {
    if(s[i] == s[i - 1]) {
      cnt++;
    } else {
      v[s[i - 1] - 'a'].push_back(cnt);
      cnt = 1;
    }
  }
  v[s[n - 1] - 'a'].push_back(cnt);
  int ans = 0;
  for(int i = 0; i < 26; i++) {
    cnt = 0;
    for(auto j : v[i]) {
      cnt += (j / k);
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
