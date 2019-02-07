#include <bits/stdc++.h>
using namespace std;

// Approach - 1
// Idk what's wrong :/

// int main() {
//   int t; cin >> t;
//   while(t--) {
//     int n; cin >> n;
//     int a[n], b[n];
//     for(int i = 0; i < n; i++) {
//       cin >> a[i] >> b[i];
//     }
//     int mi = min(a[0], b[0]), mx = max(a[0], b[0]);
//     int ans[n], fl = 0; ans[0] = 1;
//     for(int i = 1; i < n; i++) {
//       int x = min(a[i], b[i]);
//       int y = max(a[i], b[i]);
//       if(!((x < mi && y < mi) || (x > mx && y > mx))) {
//         mi = min(mi, x);
//         mx = max(mx, y);
//         ans[i] = 1;
//       } else {
//         fl = 1;
//         ans[i] = 2;
//       }
//     }
//     if(!fl) cout << -1;
//     else for(int i = 0; i < n; i++) cout << ans[i] << " ";
//     cout << endl;
//   }
//   return 0;
// }

// Approach - 2

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<pair<pair<int, int>, int> > v;
    for(int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;
      v.push_back(make_pair(make_pair(x, y), i));
    }
    sort(v.begin(), v.end()); int ans[n];
    int mx = v[0].first.second, fl = 0;
    for(int i = 1; i < n; i++) {
      if(v[i].first.first > mx) {
        fl= 1;
        for(int j = 0; j < i; j++) ans[v[j].second] = 1;
        for(int j = i; j < n; j++) ans[v[j].second] = 2;
        break;
      }
      mx = max(mx, v[i].first.second);
    }
    if(fl) for(int i = 0; i < n; i++) cout << ans[i] << " ";
    else cout << -1;
    cout << endl;
  }
  return 0;
}
