#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n], gd;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for(int i = n - 2; i >= 0; i--) {
    if(a[i] == a[i + 1]) {
      gd = a[i];
      break;
    }
  }
  for(int i = n - 1; i >= 0; i--) {
    if(__gcd(a[i], a[n - 1]) == gd) {
      cout << a[n - 1] << " " << a[i] << endl;
      return 0;
    }
  }
  return 0;
}
