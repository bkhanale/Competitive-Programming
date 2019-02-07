#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, c; cin >> n >> c;
  int lo = 1, hi = n, co = 1000;
  while(lo < hi && co > lo - hi + 1) {
    int mid = lo + ((hi - lo) >> 3);
    cout << 1 << " " << mid << endl;
    int res; cin >> res; co--;
    if(res) {
      hi = mid;
      cout << 2 << endl;
      co -= c;
    } else {
      lo = mid + 1;
    }
  }
  if(lo == hi) {
    cout << 3 << " " << lo << endl;
    return 0;
  }
  int fl = 0;
  for(int i = lo; i <= hi; i++) {
    if(co) {
      cout << 1 << " " << i << endl;
      int res; cin >> res; co--;
      if(res) {
        cout << 3 << " " << i << endl;
        fl = 1;
        break;
      }
    }
  }
  if(!fl) cout << 3 << " " << hi << endl;
  return 0;
}
