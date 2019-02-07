#include <bits/stdc++.h>
using namespace std;

int cei(int a, int b) {
  if(a % b == 0) return a / b;
  return (a / b) + 1;
}

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a[n], tot = 0;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      tot += a[i];
    }
    int yb, mb, db;
    cin >> yb >> mb >> db;
    int yc, mc, dc;
    cin >> yc >> mc >> dc;
    int u = (yc - yb) * tot;
    int v = 0;
    for(int i = min(mc, mb) + 1; i < max(mc, mb); i++) {
      v += a[i - 1];
    }
    if(mc < mb) {
      v = - (v + a[mc - 1]);
    } else if(mc > mb) {
      v = v + a[mb - 1];
    }
    int w = dc - db;
    int l = (((yc / 4) * 4) - (cei(yb, 4) * 4)) / 4;
    if(yc % 4 != 0) l++;
    // cout << u << " " << v << " " << w << endl;
    cout << u + v + w + l + 1 << endl;
  }
  return 0;
}
