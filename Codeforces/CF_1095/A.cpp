#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string t; cin >> t;
  string ans = ""; ans += t[0];
  int cnt = 1;
  for(int i = 1; i < n; i += cnt) {
    ans += t[i];
    cnt++;
  }
  cout << ans << endl;
  return 0;
}
