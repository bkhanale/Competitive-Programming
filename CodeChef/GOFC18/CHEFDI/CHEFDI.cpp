#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    //freopen("input1.txt", "r", stdin);
    //freopen("output1.txt", "w", stdout);
    ll x;
    cin >> x;
    vector<ll> a(1000005);
    ll y, len=0;
    ll sum = 1, ans = 1;
    for(ll i = 0; i < x; i++) {
        cin >> y;
        a[i] = y % m;
        sum = (sum % m * (y + 1) % m) % m;
    }
    for(ll i = 0; i < x; i++) {
        ll b = a[i];
        b = (b % m * sum % m) % m;
        b = (b % m * 500000004) % m;
        b = (b + 1) % m;
        ans = (ans % m * b % m) % m;
    }
    cout << ans % m << endl;
}
