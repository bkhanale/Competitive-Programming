#include <bits/stdc++.h>
using namespace std;

// Approach - 1
// I missed an important point here

// int main() {
//   int n; cin >> n;
//   int b[n]; string s[n];
//   map<int, int> a;
//   for(int i = 0; i < n; i++) {
//     cin >> s[i];
//   }
//   for(int i = 0; i < n; i++) {
//     int cnt = 0;
//     for(int j = 0; j < s[i].length(); j++) {
//       if(s[i][j] == '(') cnt++;
//       else cnt--;
//     }
//     a[cnt]++; b[i] = cnt;
//   }
//   int cnt = a[0] / 2;
//   for(int i = 0; i < n; i++) {
//     if(b[i] == 0) continue;
//     // cout << b[i] << " " << a[b[i]] << " " << a[-b[i]] << endl;
//     // if(a[b[i]] && a[-b[i]]) {
//     //   cnt++;
//     //   a[-b[i]]--;
//     //   a[b[i]]--;
//     // }
//     cnt += min(a[b[i]], a[-b[i]]);
//     a[b[i]] = 0, a[-b[i]] = 0;
//   }
//   cout << cnt << endl;
//   return 0;
// }

// Approach - 2:

int main() {
  int n; cin >> n;
  int ans1 = 0, ans = 0;
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    string s; cin >> s;
    int sc = 0, mn = INT_MAX;
    for(int i = 0; i < s.length(); i++) {
      if(s[i] == '(') sc++;
      else sc--;
      mn = min(mn, sc);
    }
    if(sc == 0 && mn == 0) ans1++;
    else {
      if(sc < 0 && mn == sc) mp[sc]++;
      else if(mn >= 0) mp[sc]++;
    }
  }
  ans = ans1 / 2;
  for(auto i : mp) {
    if(i.first > 0) ans += min(i.second, mp[-i.first]);
  }
  cout << ans << endl;
  return 0;
}
