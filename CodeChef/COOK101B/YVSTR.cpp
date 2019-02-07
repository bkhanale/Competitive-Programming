#include <bits/stdc++.h>
using namespace std;

// Was not very simple, lot of thinking involved here.
// The editorial is good and easy to understand.


int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    int a = 0, cnt = 1; char ca;
    vector<pair<int, int> > v[26][26];
    int sing[26]; memset(sing, 0, sizeof sing);
    for(int i = 1; i < n; i++) {
      if(s[i] == s[i - 1]) {
        cnt++;
      } else {
        sing[s[i - 1] - 'a'] = max(sing[s[i - 1] - 'a'], cnt);
        if(a == 0) {
          ca = s[i - 1];
          a = cnt;
          cnt = 1;
        }
        else {
          v[ca - 'a'][s[i - 1] - 'a'].push_back(make_pair(a, cnt));
          ca = s[i - 1]; a = cnt; cnt = 1;
        }
      }
    }
    sing[s[n - 1] - 'a'] = max(sing[s[n - 1] - 'a'], cnt);
    if(a != 0) {
      v[ca - 'a'][s[n - 1] - 'a'].push_back(make_pair(a, cnt));
    }
    long long ans = 0; int las = 0;
    for(int i = 0; i < 26; i++) {
      ans += sing[i];
      for(int j = 0; j < 26; j++) {
        vector<pair<int, int> > vec; las = 0;
        sort(v[i][j].begin(), v[i][j].end());
        // cout << i << " " << j << " " << v[i][j].size() << endl;
        for(auto k : v[i][j]) {
          while(!vec.empty() && vec.back().second <= k.second) {
            vec.pop_back();
          }
          vec.push_back(k);
        }
        for(auto k : vec) {
          // cout << "k = " << k.first << " " << las << " " << k.second << endl;
          ans += 1LL * (k.first - las) * k.second;
          las = k.first;
        }
        // cout << "ans = " << ans << endl;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
