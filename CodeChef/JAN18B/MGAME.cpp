#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n, p, mx; cin >> n >> p;
    if(n % 2 == 0) mx = n / 2 - 1;
    else mx = n / 2;
    long long ans;
    if(mx == 0) {
      int x = (n == 1) ? 1 : 2;
      ans = 1LL * x * p * p + 1LL * (p - x) * p * x + 1LL * (p - x) * (p - x) * x + 1LL * (p - x) * (p - x) * (p - x);
    } else {
      ans = 1LL * (p - mx) * (p - mx) + 1LL * (p - n) * (p - mx) + 1LL * (p - n) * (p - n);
    }
    cout << ans << endl;
  }
  return 0;
}
