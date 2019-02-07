#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    double a, fl = 0; cin >> a;
    for(int i = 3; i <= 360; i++) {
      for(int j = 1; j <= i - 2; j++) {
        if((180 * j) % i == 0 && (180 * j) / i == a) {
          cout << i << endl;
          fl = 1; break;
        }
      }
      if(fl) break;
    }
    if(!fl) cout << -1 << endl;
  }
  return 0;
}
