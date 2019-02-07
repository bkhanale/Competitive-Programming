#include <bits/stdc++.h>
using namespace std;

// Approach - 1: Misunderstood the problem :/

// #define SZ(x) ((int)(x).size())
//
// int n;
// string s;
// long long a[100005], amb[4];
// vector<int> pos[4];
//
// int main() {
//   cin >> n >> s;
//   for(int i = 0; i < n; i++) {
//     cin >> a[i];
//   }
//   char t[4] = {'h', 'a', 'r', 'd'};
//   for(int j = 0; j < 4; j++) {
//     amb[j] = 0;
//     for(int i = 0; i < n; i++) {
//       if(s[i] == t[j]) {
//         pos[j].push_back(i);
//       }
//     }
//     if(SZ(pos[j]) == 0) {
//       cout << 0 << endl;
//       return 0;
//     }
//   }
//   for(auto i : pos[0]) {
//     if(i < min(pos[1].back(), min(pos[2].back(), pos[3].back()))) {
//       amb[0] += a[i];
//     }
//   }
//   for(auto i : pos[1]) {
//     if(i < min(pos[3].back(), pos[2].back()) && i > pos[0].front()) {
//       amb[1] += a[i];
//     }
//   }
//   for(auto i : pos[2]) {
//     if(i < pos[3].back() && i > max(pos[0].front(), pos[1].front())) {
//       amb[2] += a[i];
//     }
//   }
//   for(auto i : pos[3]) {
//     if(i > max(pos[0].front(), max(pos[1].front(), pos[2].front()))) {
//       amb[3] += a[i];
//     }
//   }
//   cout << min(amb[0], min(amb[1], min(amb[2], amb[3]))) << endl;
//   return 0;
// }

// Approach - 2

int n;
long long a[100005];
string s, t = "hard";
long long dp[100005][5];

int main() {
  cin >> n >> s;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  dp[0][0] = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 4; j++) {
      dp[i + 1][j] = dp[i][j];
    }
    if(s[i] == 'h') dp[i + 1][0] += a[i];
    else if(s[i] == 'a') dp[i + 1][1] = min(dp[i][0], dp[i + 1][1] + a[i]);
    else if(s[i] == 'r') dp[i + 1][2] = min(dp[i][1], dp[i + 1][2] + a[i]);
    else if(s[i] == 'd') dp[i + 1][3] = min(dp[i][2], dp[i + 1][3] + a[i]);
  }
  cout << min(dp[n][0], min(dp[n][1], min(dp[n][2], dp[n][3]))) << endl;
  return 0;
}
