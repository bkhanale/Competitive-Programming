#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  if(y >= x) {
    int cnt = 0;
    while(a[0] <= x) {
      cnt++;
      a[0] = INT_MAX;
      a[1] += y;
      sort(a, a + n);
    }
    cout << cnt << endl;
  } else {
    cout << n << endl;
  }
  return 0;
}
