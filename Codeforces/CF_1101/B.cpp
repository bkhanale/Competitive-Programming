#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  string t = "[::]";
  int st = -1, ed = -1;
  for(int i = 0; i < n; i++) {
    if(s[i] == '[' && st == -1) st = i;
    if(s[i] == ']') ed = i;
  }
  int stc = -1, edc = -1;
  for(int i = st; i <= ed; i++) {
    if(s[i] == ':' && stc == -1) stc = i;
    if(s[i] == ':' && stc != i) edc = i;
  }
  int cnt = 0;
  for(int i = stc; i <= edc; i++) {
    if(s[i] == '|') cnt++;
  }
  if(st == -1 || ed == -1 || stc == -1 || edc == -1) cout << -1 << endl;
  else cout << 4 + cnt << endl;
  return 0;
}
