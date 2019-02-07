#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int x[n], y[n];
  int a[n], b[n];
  int p[n];
  for(int i = 0; i < n; i++) {
    p[i] = i;
    cin >> x[i] >> y[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  map<int, int> zz, zzz;
  int k = 0;
  for(int i = 0; i < n; i++) {
    int fl = 0;
    for(int j = 1; j < n; j++) {
      if(i != j) {
        zz[a[i] + x[j]]++;
        zzz[b[i] + y[j]]++;
      }
    }
  }
  int mx = 0, mxi = 0;
  for(auto i : zz) {
    if(i.second > mx) {
      mx = i.second;
      mxi = i.first;
    }
  }
  mx = 0;
  cout << mxi << " ";
  for(auto i : zzz) {
    if(i.second > mx) {
      mx = i.second;
      mxi = i.first;
    }
  }
  cout << mxi << endl;
  return 0;
}
