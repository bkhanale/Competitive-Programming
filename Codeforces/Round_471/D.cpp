/*
*/
#include <bits/stdc++.h>

#define rust(a, b, c, d) sqrt(sqr(a - c) + sqr(b - d))
#define sqr(a) (a)*(a)
#define m_p make_pair
#define fi first
#define se second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
//#define endl "\n"
#define pll pair <ll,ll>
#define vl vector <ll>

typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1000000;
const double eps = 1e-9;
const ll mod = 1e9 + 7;
using namespace std;

ll binpow(ll a, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n&1) ans*=a;
        a*=a;
        n >>= 1;
    }
    return ans;
}
ll f(ll x){
    ll l, r;
    l = 1;
    r = 1e9;
    while (l < r){
        ll c = (l + r) / 2;
        if (c * c >= x) r = c;
        else l = c + 1;
    }
    return l;
}
vector <ll> v, v1;
map <ll, ll> mp;
ll n, l, r;

int main()
{
    srand(time(0));
    //freopen("1.in","r",stdin);
    //freopen("1.out","w",stdout);
    fast_io;
    cin >> n;
    for (int i = 2; i <= MAXN; ++i){
        ll now;
        now = ll(i) * ll(i);
        ll da = 1e18;
        ll da1 = i;
        while (now <= (da / da1)){
            now *= i;
            ll kek = f(now);
            if (kek * kek != now){
                v1.push_back(now);
            }
        }
    }
    for (int i = 0; i < v1.size(); ++i){
        if (mp[v1[i]] == 0){
            v.push_back(v1[i]);
            mp[v1[i]] = 1;
        }
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; ++i){
        cin >> l >> r;
        ll now1 = f(l);
        ll now2 = f(r);
        while (now2 * now2 > r){
            now2--;
        }
        while (now1 * now1 < l){
            now1++;
        }
        ll kol = now2 - now1 + 1;
        ll l1 = lower_bound(v.begin(), v.end(), l) - v.begin();
        ll r1 = lower_bound(v.begin(), v.end(), r) - v.begin();
        cout << r1 - l1 + kol << endl;
    }
    return 0;
}



