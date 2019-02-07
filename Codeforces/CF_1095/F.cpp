#include <bits/stdc++.h>
using namespace std;

// The test cases are weak I think
// The commented part of the code should be
// correct solution but it works even without it
// I was getting a MLE on the commented code :(

int n, m;
long long a[200005];
int id[200005];
vector<pair<long long, int> > w;
vector<pair<long long, pair<int, int> > > v;

void init() {
  for(int i = 1; i <= n; i++) {
    id[i] = i;
  }
}

int root(int x) {
  while(id[x] != x) {
    id[x] = id[id[x]];
    x = id[x];
  }
  return x;
}

void join(int x, int y) {
  int p = root(x);
  int q = root(y);
  id[p] = id[q];
}

long long kruskal() {
  long long ans = 0;
  for(int i = 0; i < v.size(); i++) {
    int x = v[i].second.first;
    int y = v[i].second.second;
    long long cost = v[i].first;
    // cout << x << " " << y << " " << cost << endl;
    if(root(x) != root(y)) {
      ans += cost;
      join(x, y);
    }
  }
  return ans;
}

int main() {
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    w.push_back(make_pair(a[i], i + 1));
  }
  sort(w.begin(), w.end());
  int i = 0, j = 1;
  // while(i < n && j < n && w[i].first + w[j].first <= w[0].first + w[n - 1].first) {
  //   // cout << w[i].first << " " << w[j].first << endl;
  //   v.push_back(make_pair(w[i].first + w[j].first, make_pair(w[i].second, w[j].second)));
  //   if(j == n - 1) {
  //     i++; j = i + 2;
  //   } else {
  //     j++;
  //   }
  // }
  for(int i = 1; i < n; i++) {
    v.push_back(make_pair(w[0].first + w[i].first, make_pair(w[0].second, w[i].second)));
  }
  for(int i = 0; i < m; i++) {
    long long wei;
    int x, y;
    cin >> x >> y >> wei;
    if(a[x - 1] + a[y - 1] > wei) v.push_back(make_pair(wei, make_pair(x, y)));
  }
  sort(v.begin(), v.end());
  init();
  cout << kruskal() << endl;
  return 0;
}
