#include <bits/stdc++.h>
using namespace std;

// Incomplete, stupid solution

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int c0 = 0, c1 = 0, c2 = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == '0') {
      c0++;
    } else if (s[i] == '1') {
      c1++;
    } else {
      c2++;
    }
  }
  char ans[n];
  int rep0 = c0 - n / 3;
  int rep1 = c1 - n / 3;
  int rep2 = c2 - n / 3;
  int i = 0;
  if(rep0 < 0) {
    for(i = 0; i < n; i++) {
      if(s[i] == '1') {
        if(rep1 > 0) {
          ans[i] = '0';
          rep1--;
        } else {
          ans[i] = s[i];
        }
      }
      if(s[i] == '2') {
        if(rep2 > 0) {
          ans[i] = '0';
          rep2--;
        } else {
          ans[i] = s[i];
        }
      }
      rep0++;
      if(rep0 == 0) break;
    }
  }
  if(rep2 < 0) {
    for(i = n - 1; i >= 0; i--) {
      if(s[i] == '0') {
        if(rep0 > 0) {
          ans[i] = '2';
          rep0--;
        } else {
          ans[i] = s[i];
        }
      }
      if(s[i] == '1') {
        if(rep1 > 0) {
          ans[i] = '2';
          rep1--;
        } else {
          ans[i] = s[i];
        }
      }
      rep2++;
      if(rep2 == 0) break;
    }
  }
  for(i = 0; i < n; i++) {
    if(ans[i] != '1' || ans[i] != '0' || ans[i] != '2') {
      cout << '1';
    } else {
      cout << ans[i];
    }
  }
  cout << endl;
  return 0;
}
