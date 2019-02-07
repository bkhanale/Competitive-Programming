#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n; int k;
  cin >> n >> k;
  string bin = bitset<64>(n).to_string();
  queue<int> ans; int cnt = 0;
  for(int i = 63; i >= 0; i--) {
    if(bin[i] == '1') {
      cnt++;
      ans.push(pow(2, 63 - i));
      // cout << "ans = " << ans.back() << endl;
    }
  }
  if(n == k) {
    cout << "YES\n";
    for(int i = 0; i < n; i++) {
      cout << 1 << " ";
    }
    cout << endl;
    return 0;
  }
  if(cnt <= k && n > k) {
    while(!ans.empty()) {
      if(k == ans.size()) {
        cout << "YES\n";
        while(!ans.empty()) {
          cout << ans.front() << " ";
          ans.pop();
        }
        cout << endl;
        return 0;
      }
      int tp = ans.front();
      // cout << tp << endl;
      if(tp % 2 != 0) {
        ans.pop();
        ans.push(tp);
        continue;
      }
      ans.pop();
      ans.push(tp / 2);
      ans.push(tp / 2);
      // cout << ans.size() << " ";
    }
  }
  cout << "NO\n";
  return 0;
}
