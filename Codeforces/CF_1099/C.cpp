#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int k; cin >> k;
  int ca = 0, sf = 0, lt = 0;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '?') ca++;
    else if(s[i] == '*') sf++;
    else lt++;
  }
  // cout << ca << " " << sf << " " << lt << endl;
  if(lt == k) {
    for(int i = 0; i < s.length(); i++) {
      if(s[i] != '?' && s[i] != '*') cout << s[i];
    }
    cout << endl;
    return 0;
  }
  if(lt < k) {
    if(sf == 0) cout << "Impossible\n";
    else {
      int fl = 0;
      cout << s[0];
      for(int i = 1; i < s.length(); i++) {
        if(fl == 0 && s[i] == '*' && s[i - 1] != '?' && s[i - 1] != '*') {
          for(int j = 0; j < k - lt; j++) {
            cout << s[i - 1];
          }
          fl = 1;
        }
        if(s[i] != '*' && s[i] != '?') cout << s[i];
      }
      cout << endl;
      return 0;
    }
  }
  if(lt > k) {
    if(ca + sf < lt - k) cout << "Impossible\n";
    else {
      int req = lt - k, cnt = 0;
      for(int i = 0; i < s.length() - 1; i++) {
        if(s[i] != '*' && s[i] != '?') {
          if(s[i + 1] == '?' || s[i + 1] == '*') {
            if(cnt >= req) {
              cout << s[i];
            } else {
              cnt++;
            }
          } else {
            cout << s[i];
          }
        }
      }
      if(s[s.length() - 1] != '*' && s[s.length() - 1] != '?') cout << s[s.length() - 1] << endl;
    }
  }
  return 0;
}
