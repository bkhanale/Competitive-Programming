#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n], mx = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  stack<int> s; int fl = 0, las = 0;
  for(int i = 0; i < n; i++) {
    if(!s.empty()) {
      if(s.top() == a[i]) {
        las = max(las, s.top());
        s.pop();
      } else {
        if(s.top() < a[i]) {
          fl = 1;
          break;
        }
        las = max(las, s.top());
        s.push(a[i]);
      }
    } else {
      s.push(a[i]);
    }
  }
  // cout << s.top() << las << endl;
  if(s.size() == 1 && s.top() < las) fl = 1;
  if(s.size() > 1 || fl) cout << "NO\n";
  else cout << "YES\n";
  return 0;
}
