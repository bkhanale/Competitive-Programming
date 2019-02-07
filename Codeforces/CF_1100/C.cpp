#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;

int main() {
  double n, r; cin >> n >> r;
  double x = sin((360.0 / (2.0 * n)) * M_PI / 180.0);
  cout << fixed << setprecision(10) << (double)((x * r) / (1.0 - x)) << endl;
  return 0;
}
