#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, ans = INT_MAX;
  cin >> n >> k;
  for(int i = 1; i < k; i++) {
    if(n % i == 0) {
      int a = n / i;
      if(((k * a) + i) % k == i) ans = min(ans, k * a + i);
    }
  }
  cout << ans << endl;
  return 0;
}
