#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  int mn = INT_MAX, mx = INT_MIN;
  int mni, mxi;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] < mn) {
      mn = a[i];
      mni = i;
    }
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
    if(b[i] > mx) {
      mx = b[i];
      mxi = i;
    }
  }
  for(int i = 0; i < n; i++) {
    if(i != mni) {
      cout << i << " " << mxi << endl;
    }
  }
  for(int i = 0; i < m; i++) {
    cout << mni << " " << i << endl;
  }
  return 0;
}
