#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n], mx = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  stack<int> s;
  for(int i = 0; i < n; i++) {
    if(!s.empty()) {
      if(s.top() == a[i] % 2) {
        s.pop();
      } else {
        s.push(a[i] % 2);
      }
    } else {
      s.push(a[i] % 2);
    }
  }
  if(s.size() > 1) cout << "NO\n";
  else cout << "YES\n";
  return 0;
}
