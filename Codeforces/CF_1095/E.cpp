#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int cnt = 0, d[n];
  for(int i = 0; i < n; i++) {
    if(s[i] == '(') {
      cnt++;
    } else {
      cnt--;
    }
    d[i] = cnt;
  }
  int ans = 0;
  if(abs(cnt) == 2) {
    for(int i = n - 2; i >= 0; i--) {
      d[i] = min(d[i], d[i + 1]);
    }
    int c = 0;
    for(int i = 0; i < n; i++) {
      // cout << ans << endl;
      if(s[i] == '(') {
        if(d[i] - 2 >= 0 && cnt == 2) {
          ans++;
        }
        c++;
      } else {
        if(d[i] + 2 >= 0 && cnt == -2) {
          ans++;
        }
        c--;
      }
      if(c < 0) break;
    }
  }
  cout << ans << endl;
  return 0;
}
