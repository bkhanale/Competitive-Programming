#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r, rat;
  cin >> n >> r;
  while(n--) {
    cin >> rat;
    if(rat >= r) {
      cout << "Good boi\n";
    } else {
      cout << "Bad boi\n";
    }
  }
  return 0;
}
