#include <bits/stdc++.h>
using namespace std;

int main() {
  int y, b, r;
  cin >> y >> b >> r;
  int x = min(y, min(b, r));
  if(r == x) {
    int z1 = min(r - 1, b);
    int z2 = min(r - 2, y);
    int z3 = min(z1, z2);
    if(z3 == z1){
      cout << z1 * 3 << endl;
    } else {
      cout << z2 * 3 + 3 << endl;
    }
  }
  else if(b == x) {
    int z1 = min(b + 1, r);
    int z2 = min(b - 1, y);
    int z3 = min(z1, z2);
    if(z3 == z1){
      cout << z1 * 3 - 3 << endl;
    } else {
      cout << z2 * 3 + 3 << endl;
    }
  }
  else {
    int z1 = min(y + 1, b);
    int z2 = min(y + 2, r);
    int z3 = min(z1, z2);
    if(z3 == z2){
      cout << z2 * 3 - 3 << endl;
    } else {
      cout << z1 * 3 << endl;
    }
  }
  return 0;
}
