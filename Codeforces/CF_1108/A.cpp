#include <bits/stdc++.h>
using namespace std;

int main() {
  int q; cin >> q;
  while(q--) {
    int l1, r1, l2, r2, fl = 0;
    cin >> l1 >> r1 >> l2 >> r2;
    for(int i = l1; i <= r1; i++) {
      for(int j = l2; j <= r2; j++) {
        if(i != j) {
          cout << i << " " << j << endl;
          fl = 1; break;
        }
      }
      if(fl) break;
    }
  }
  return 0;
}
