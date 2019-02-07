#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int l, r;
    cin >> l >> r;
    if(l == 1) cout << 1 << " " << 2 << endl;
    else cout << l << " " << l * 2 << endl;
  }
  return 0;
}
