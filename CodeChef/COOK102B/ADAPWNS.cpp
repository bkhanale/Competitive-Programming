#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    int n = s.length(), tu = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
      if(s[i] == '.') cnt++;
      else {
        tu += (cnt / 2) + (cnt % 2);
      }
    }
    if(tu % 2 == 0) cout << "No\n";
    else cout << "Yes\n";
  }
  return 0;
}
