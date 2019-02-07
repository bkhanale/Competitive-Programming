#include <bits/stdc++.h>
using namespace std;

int main() {
  string a; cin >> a; int fl = 0;
  for(int i = 0; i < 5; i++){
    string b; cin >> b;
    if(b[0] == a[0] || b[1] == a[1]) {
      fl = 1;
    }
  }
  if(fl) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
