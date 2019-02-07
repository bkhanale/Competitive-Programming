#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.length();
  stack<char> st; int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(!st.size()) st.push(s[i]);
    else {
      if(st.top() == s[i]) {
        st.pop();
        cnt++;
      } else {
        st.push(s[i]);
      }
    }
  }
  if(cnt % 2 == 0) cout << "No\n";
  else cout << "Yes\n";
  return 0;
}
