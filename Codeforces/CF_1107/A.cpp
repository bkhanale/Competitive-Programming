#include <bits/stdc++.h>
using namespace std;

int main() {
  int q; cin >> q;
  while(q--) {
    int n; cin >> n;
    string s; cin >> s;
    string cur = ""; cur += s[0];
    if(s.substr(1, n).length() < 1) {
      cout << "NO\n";
    } else {
      if(s.substr(1, n).length() > 1) {
        cout << "YES\n";
        cout << "2\n" << cur << " " << s.substr(1, n) << endl;
      } else {
        if(cur < s.substr(1, n)) {
          cout << "YES\n";
          cout << "2\n" << cur << " " << s.substr(1, n) << endl;
        } else {
          cout << "NO\n";
        }
      }
    }
  }
  return 0;
}
