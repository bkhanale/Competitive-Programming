#include <bits/stdc++.h>
using namespace std;

// I didn't like the question very much
// lost a lot of time in the coding part

int main() {
  int n; cin >> n;
  vector<pair<int, pair<int, string> > > v;
  for(int i = 0; i < 2 * n - 2; i++) {
    string s; cin >> s;
    v.push_back(make_pair(s.length(), make_pair(i, s)));
  }
  sort(v.begin(), v.end());
  int x = v.size();
  string pre = v[x - 1].second.second;
  string suf = v[x - 2].second.second;
  char ans[2 * n - 2]; int flag = 0;
  ans[v[x - 1].second.first] = 'P';
  ans[v[x - 2].second.first] = 'S';
  for(int i = x - 3; i >= 0; i -= 2) {
    string a = v[i].second.second;
    string b = v[i - 1].second.second;
    int x1 = v[i].second.first, y1 = v[i - 1].second.first;
    int y = a.length();
    if(a == suf.substr(n - 1 - y, n - 1)) {
      if(b == pre.substr(0, y)) {
        ans[x1] = 'S';
        ans[y1] = 'P';
      } else {
        flag = 1;
        break;
      }
    }
    else if(b == suf.substr(n - 1 - y, n - 1)){
      if(a == pre.substr(0, y)) {
        ans[x1] = 'P';
        ans[y1] = 'S';
      } else {
        flag = 1;
        break;
      }
    }
    else {
      flag = 1;
      break;
    }
  }
  if(flag) {
    suf = v[x - 1].second.second;
    pre = v[x - 2].second.second;
    ans[v[x - 1].second.first] = 'S';
    ans[v[x - 2].second.first] = 'P';
    for(int i = x - 3; i >= 0; i -= 2) {
      string a = v[i].second.second;
      string b = v[i - 1].second.second;
      int x1 = v[i].second.first, y1 = v[i - 1].second.first;
      int y = a.length();
      if(a == suf.substr(n - 1 - y, n - 1)) {
        if(b == pre.substr(0, y)) {
          ans[x1] = 'S';
          ans[y1] = 'P';
        } else {
          ans[x1] = 'S';
          ans[y1] = 'P';
        }
      }
      else {
        if(a == pre.substr(0, y)) {
          ans[x1] = 'P';
          ans[y1] = 'S';
        } else {
          ans[x1] = 'P';
          ans[y1] = 'S';
        }
      }
    }
  }
  for(int i = 0; i < 2 * n - 2; i++) cout << ans[i];
  cout << endl;
  return 0;
}
