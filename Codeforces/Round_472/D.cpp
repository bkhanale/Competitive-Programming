#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF INT_MAX
#define pb push_back
#define mp make_pair
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) make_set(i);
    ll cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        if(cnt <= a[i])
        {
            int t = a[i] - cnt + 1;
            for(int j = i; t > 0; --t)
            {
                j = find_set(j);
                must[j] = 1;
                if(j)
                    union_sets(find_set(j - 1), j);
            }
            cnt  = a[i] + 1;
        }
    }
    ll ans = 0;
    cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        cnt += must[i];
        ans += cnt - a[i] - 1;
    }
    cout << ans;
	return 0;
}