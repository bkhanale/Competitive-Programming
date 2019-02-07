#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  if(n == 1) {
    cout << "1\n1\n";
    return 0;
  }
  for(int i = 2; i <= n; i++) {
    if(n % i == 0 && n / i <= 9) {
      cout << i << "\n";
      for(int j = 0; j < i; j++) cout << n / i << " ";
      cout << endl;
      return 0;
    }
  }
  return 0;
}
