#include <bits/stdc++.h>
using namespace std;

bool vis[200005];
vector<vector<int> > p(200005);
vector<vector<int> > v(200005);

void dfs(int s) {
  vis[s] = true;
  cout << s << " ";
  for(auto i : v[s]) {
    for(auto j : p[i]) {
      if(j == s && !vis[i]) dfs(i);
    }
  }
}

int main() {
  memset(vis, false, sizeof vis);
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
    p[a].push_back(i + 1);
    p[b].push_back(i + 1);
  }
  dfs(1);
  cout << endl;
  return 0;
}
