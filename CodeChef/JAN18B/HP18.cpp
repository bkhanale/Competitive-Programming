#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n, a, b;
    cin >> n >> a >> b;
    int ca = 0, cb = 0, cc = 0;
    for(int i = 0; i < n; i++) {
      int x; cin >> x;
      if(x % a == 0 && x % b == 0) cc++;
      else if(x % a == 0) cb++;
      else if(x % b == 0) ca++;
    }
    if(cb >= ca) {
      if(cc) cout << "BOB\n";
      else cout << "ALICE\n";
    } else {
      cout << "ALICE\n";
    }
  }
  return 0;
}
