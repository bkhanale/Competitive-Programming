#include <bits/stdc++.h>
using namespace std;

// Solved after the contest, very nice problem!

int main() {
  int n, s; cin >> n >> s;
  int m[n + 1];
  memset(m, 0, sizeof m);
  for(int i = 0; i < n - 1; i++) {
    int a, b; cin >> a >> b;
    m[a]++; m[b]++;
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    if(m[i] == 1) cnt++;
  }
  cout << fixed << setprecision(20) << (double) s / cnt * 2.0 << endl;
  return 0;
}
