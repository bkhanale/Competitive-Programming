#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int r, c, k, cnt = 0;
    cin >> r >> c >> k; r--; c--;
    for(int i = r - k; i <= r + k; i++) {
      for(int j = c - k; j <= c + k; j++) {
        if(i >= 0 && i < 8 && j >= 0 && j < 8) cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
