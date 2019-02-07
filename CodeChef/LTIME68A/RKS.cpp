#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    vector<int> v, v1;
    map<int, int> m;
    for(int i = 0; i < k; i++) {
      int r, c; cin >> r >> c;
      v.push_back(c);
      m[r] = c;
    }
    sort(v.begin(), v.end());
    int cur = 1;
    for(int i = 0; i < k; i++) {
      for(int j = cur; j < v[i]; j++) {
        v1.push_back(j);
      }
      cur = v[i] + 1;
    }
    for(int i = cur; i <= n; i++) {
      v1.push_back(i);
    }
    int j = 0;
    vector<pair<int, int> > v2;
    for(int i = 1; i <= n; i++) {
      if(!m[i]) {
        v2.push_back({i, v1[j]});
        j++;
      }
    }
    cout << v2.size() << " ";
    for(int i = 0; i < v2.size(); i++) {
      cout << v2[i].first << " " << v2[i].second << " ";
    }
    cout << endl;
  }
  return 0;
}
