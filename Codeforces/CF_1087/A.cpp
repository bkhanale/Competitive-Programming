#include <bits/stdc++.h>
using namespace std;

int main() {
  string t; cin >> t;
  int mid, n = t.length();
  if((n - 1) % 2 == 0) mid = n / 2;
  else mid = (n - 1) / 2;
  cout << t[mid];
  string a = t.substr(0, mid);
  string b = t.substr(mid + 1, n);
  int j = a.length() - 1, k = 0;
  // cout << a << " " << b << endl;
  for(int i = 1; i < n; i++) {
    if(i % 2) {
      cout << b[k];
      k++;
    } else {
      cout << a[j];
      j--;
    }
  }
  return 0;
}
