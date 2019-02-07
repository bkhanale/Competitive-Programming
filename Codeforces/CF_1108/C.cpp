#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int ans = INT_MAX;
  string t = "BGR", ans2;
  do {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] != t[i % 3]) cnt++;
    }
    if(cnt < ans) {
      ans = cnt; ans2 = t;
    }
  } while(next_permutation(t.begin(), t.end()));
  cout << ans << endl;
  for(int i = 0; i < n; i++) {
    cout << ans2[i % 3];
  }
  cout << endl;
  return 0;
}
