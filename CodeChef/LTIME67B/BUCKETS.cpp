#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  double ans[k];
  memset(ans, 0.0, sizeof ans);
  for(int i = 0; i < n; i++) {
    int ba[k];
    double tot = 0;
    for(int j = 0; j < k; j++){
      cin >> ba[j];
      tot += ba[j] + ans[j];
    }
    if(tot != 0) {
      for(int j = 0; j < k; j++) {
        ans[j] = (double)(ba[j] + ans[j]) / tot;
      }
    }
  }
  for(int i = 0; i < k; i++) {
    cout << fixed << setprecision(30) << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
