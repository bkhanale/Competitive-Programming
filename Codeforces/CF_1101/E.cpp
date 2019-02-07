#include <bits/stdc++.h>
using namespace std;

// First time where there was TLE
// due to `not using fastio`

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n; cin >> n;
  int mx = 0, my = 0;
  for(int i = 0; i < n; i++) {
    char ch; int x, y;
    cin >> ch >> x >> y;
    if(ch == '+') {
      mx = max(mx, min(x, y));
      my = max(my, max(x, y));
    } else {
      if((mx <= x && my <= y) ||
         (my <= x && mx <= y)) {
           cout << "YES\n";
         } else {
           cout << "NO\n";
         }
    }
  }
  return 0;
}
