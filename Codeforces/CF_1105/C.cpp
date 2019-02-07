#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long nCrModp(long long n, long long r, long long p)
{
    // The array C is going to store last row of
    // pascal triangle at the end. And last entry
    // of last row is nCr
    long long C[r+1];
    memset(C, 0, sizeof(C));

    C[0] = 1; // Top row of Pascal Triangle

    // One by constructs remaining rows of Pascal
    // Triangle from top to bottom
    for (long long i = 1; i <= n; i++)
    {
        // Fill entries of current row using previous
        // row values
        for (long long j = min(i, r); j > 0; j--)

            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

int main() {
  long long n, l, r;
  long long c0 = 0, c1 = 0, c2 = 0;
  cin >> n >> l >> r;
  if(l % 3 == 0) {
    c0 += (r - l) / 3 + 1;
    c1 += c0, c2 += c0;
    if(r % 3 == 0) {
      c1 = c0, c2 = c0;
    } else {
      c1 = c0 + 1;
      if(r % 3 == 2) c2 = c0 + 1;
    }
  } else {
    c2++;
    if(l % 3 == 1) c1++;
    long long x = (l / 3 + 1) * 3;
    c0 += (r - x) / 3 + 1;
    if(r % 3 == 0) {
      c1 += c0, c2 += c0;
    } else {
      c1 += c0 + 1;
      if(r % 3 == 2) c2 += c0 + 1;
    }
  }
  long long ans = 0;
  for(long long i = 1; i <= n / 2; i++) {
    ans += (nCrModp(n, i, MOD) * nCrModp(c1, i, MOD)
            * nCrModp(n - i, i, MOD) * nCrModp(c2, i, MOD)
            * nCrModp(c0, n - (2 * i), MOD)) % MOD;
  }
  cout << ans << endl;
  return 0;
}
