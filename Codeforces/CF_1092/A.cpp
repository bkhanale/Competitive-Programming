#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k, i = 0, j = 0;
    cin >> n >> k;
    while(j < n) {
      cout << (char)(i + 97);
      i = (i + 1) % k;
      j++;
    }
    cout << endl;
  }
  return 0;
}
