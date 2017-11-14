#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
 
int main()
{
    ll t, j=0;
    cin>>t;
    char let[26];
    for(char i='a'; i<='z'; i++) {
        let[j++] = i; 
    }
    while(t--)
    {
        ll ans1, n, p;
        string ans2;
        cin>>n>>p;
        if(n == 1) {
            ans2 = "a";
            ans1 = 1;
        }
        else if(p == 1) {
            for(ll i=0; i<n; i++) {
                ans2 += 'a';
            }
            ans1 = n;
        }
        else if(p == 2) {
            if(n == 2) {
                ans2 = "ab";
                ans1 = 1;
            }
            else if(n == 3) {
                ans2 = "aab";
                ans1  = 2;
            }
            else if(n == 4) {
                ans2 = "aabb";
                ans1  = 2;
            }
            else if(n == 5) {
                ans2 = "aaabb";
                ans1  = 3;
            }
            else if(n == 6) {
                ans2 = "aaabbb";
                ans1  = 3;
            }
            else if(n == 7) {
                ans2 = "aaababb";
                ans1  = 3;
            }
            else if(n == 8) {
                ans2 = "aaababbb";
                ans1  = 3;
            }
            else {
                ans2 = "aa";
                string s1 = "aababb";
 
                for(ll i=0; i<((n-2)/6); i++) {
                    ans2 += s1;
                }
 
                for(ll i=0; i<((n-2)%6); i++) {
                    ans2 += s1[i];
                }
                ans1 = 4;
            }
        }
        else {
            if(p >= n) {
                for(ll i=0; i<n; i++) {
                    ans2 += let[i];
                }
                ans1 = 1;
            }else {
                string s1 = "";
                for(ll i=0; i<p; i++) {
                    s1 += let[i];
                }
                for(ll i=0; i<(n/p); i++) {
                    ans2 += s1;
                }
                for(ll i=0; i<(n%p); i++) {
                    ans2 += let[i];
                }
                ans1 = 1;
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
} 