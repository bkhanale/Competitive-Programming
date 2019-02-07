#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.length();
  int v = 0, h = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') {
      cout << 3 << " " << h % 2 * 2 + 1 << endl;
      h++;
    } else {
      cout << 1 << " " << v % 4 + 1 << endl;
      v++;
    }
  }
  return 0;
}
