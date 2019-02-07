#include <bits/stdc++.h>
using namespace std;

int cei(int a, int b) {
  if(a % b == 0) return a / b;
  return (a / b) + 1;
}

int main() {
  int n, x; cin >> n;
  if(sqrt(n) * sqrt(n) == n) {
    x = sqrt(n);
  } else {
    x = sqrt(n) + 1;
  }
  cout << cei(n, x) + x << endl;
  return 0;
}
