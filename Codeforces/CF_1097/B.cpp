#include <bits/stdc++.h>
using namespace std;

int a[16], n;

int solve(int sum, int i) {
  if(i == n - 1) {
    if((sum + a[i]) % 360 == 0 || (sum - a[i]) % 360 == 0) {
      return 1;
    }
    return 0;
  }
  if(i < n - 1) {
    if(solve((sum + a[i]) % 360, i + 1) == 1 || solve((sum - a[i]) % 360, i + 1) == 1) return 1;
  }
}

int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if(solve(0, 0) == 1) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
