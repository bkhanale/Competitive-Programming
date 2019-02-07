#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n][n], b[n][n];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin >> a[i][j];
      }
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin >> b[i][j];
      }
    }
    int fl = 0; vector<pair<int, int> > v;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(a[i][j] == b[i][j]) {
           continue;
         } else {
           if(a[i][j] == b[j][i]) {
             v.push_back({min(i, j), max(i, j)});
           } else {
             fl = 1; break;
           }
         }
      }
      if(fl) break;
    }
    if(fl) cout << "No\n";
    else {
      int chk = -1;
      for(int i = 1; i < v.size(); i++) {
        if(v[i - 1].first == v[i + 1].first && v[i - 1].second == v[i].second) {
          continue;
        }
        else {
          if(chk == -1) {
            if(v[i - 1].first == v[i].first) chk = v[i].first;
            if(v[i - 1].second == v[i].second)
          }

        }
      }
      if(fl) cout << "No\n";
      else cout << "Yes\n";
    }
  }
  return 0;
}
