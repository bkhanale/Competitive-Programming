//
// Created by Bhushan Khanale on 07-11-2017.
//
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
const ll N = 5e5 + 10;
ll n, L, R;
 
/*
ll combine(ll &a, ll &b){
    return max(a, b);
}
 
ll pow2(ll n)
{
    ll v = n;
 
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v++; // next power of 2
 
    ll x = v >> 1; // previous power of 2
 
    return (v - n) > (n - x) ? x : v;
}
 
void build(ll node, ll li, ll ri){
    if(li == ri){
        tree[node] = 0;
        return;
    }
    ll mid = (li + ri) / 2;
    build(node * 2, li, mid);
    build(node * 2 + 1, mid + 1, ri);
    tree[node] = combine(tree[2 * node], tree[2 * node + 1]);
}
void update(ll node, ll li, ll ri, ll ind, ll val){
    if(ind < li || ind > ri){
        return;
    }
    if(li == ri){
        tree[node] = val;
        return;
    }
    ll mid = (li + ri) / 2;
    update(node * 2, li, mid, ind, val);
    update(node * 2 + 1, mid + 1, ri, ind, val);
    tree[node] = combine(tree[2 * node], tree[2 * node + 1]);
}
 
ll query(ll node, ll li, ll ri, ll qli, ll qri) {
    if(qli <= li && ri <= qri){
        return tree[node];
    }
    ll mid = (li + ri) / 2;
    if(qli <= mid){
        if(qri <= mid){
            return query(node * 2, li, mid, qli, qri);
        }else{
            ll a = query(node * 2, li, mid, qli, qri);
            ll b = query(node * 2 + 1, mid + 1, ri, qli, qri);
            return max(a, b);
        }
    }else{
        return query(node * 2 + 1, mid + 1, ri, qli, qri);
    }
}
*/
 
 
 
 
struct node {
    ll a[4], flag, v, n;
    node() {
        flag = 1;
    }
    ll val() {
        if(flag) {
            return 0;
        }
        return v;
    }
    void set(ll x) {
        flag = 0; n = 1; v = 0;
        if(x < L) {
            for(ll i = 0; i < 4; i++) {
                a[i] = 1;
            }
        }
        else if(x > R) {
            for(ll i = 0; i < 4; i++) {
                a[i] = 0;
            }
        }
        else {
            for(ll i = 0; i < 4; i++) {
                if(i == 0 || i == 3) {
                    a[i] = 0;
                } else {
                    a[i] = 1;
                    v = 1;
                }
            }
        }
 
    }
    void merge(node n1, node n2) {
        flag = 0;
        if(n1.flag and n2.flag) {
            flag = 1;
        }
        else if(n1.flag) {
            *this = n2;
        }
        else if(n2.flag) {
            *this = n1;
        }
        else {
            n = n1.n + n2.n;
            ll aX = n1.a[2] - n1.a[3]; ll bY = n2.a[1] - n2.a[0];
            v = n1.v + n2.v + aX * n2.a[0] + aX * bY + n1.a[3] * bY;
            if(n1.a[0] == n1.n) {
                a[0] = n1.a[0] + n2.a[0];
            }else {
                a[0] = n1.a[0];
            }
            if(n1.a[1] == n1.n) {
                a[1] = n1.a[1] + n2.a[1];
            }else {
                a[1] = n1.a[1];
            }
            if(n2.a[2] == n2.n) {
                a[2] = n2.a[2] + n1.a[2];
            }else {
                a[2] = n2.a[2];
            }
            if(n2.a[3] == n2.n) {
                a[3] = n2.a[3] + n1.a[3];
            }else {
                a[3] = n2.a[3];
            }
        }
    }
}tree[N << 1];
 
void build() {
    for(ll i = n; i-- ;) {
        tree[n + i].set(0);
    }
    for(ll i = n; --i ;) {
        tree[i].merge(tree[i << 1], tree[i << 1 | 1]);
    }
}
 
void update(ll n1, ll n2) {
    tree[n + n1].set(n2);
    for(ll i = n + n1; i >>= 1;) {
        tree[i].merge(tree[i << 1], tree[i << 1 | 1]);
    }
}
 
node query(ll n1, ll n2) {
    node n11, n22;
    for( n1 += n, n2 += n + 1; n1 < n2; n1 >>= 1, n2 >>= 1 ) {
        if(n1 & 1) {
            n11.merge(n11, tree[n1++]);
        }
        if(n2 & 1) {
            n22.merge(tree[--n2], n22);
        }
    }
    n11.merge(n11, n22);
    return n11;
}
 
int main(){
    ll q;
    cin >> n >> q >> L >> R;
    build();
    while(q--) {
        ll ch, x, y;
        cin >> ch >> x >> y;
        if(ch==1) {
            //update(1, 1, n, l, r);
            update(x-1, y);
        }else {
            cout << query(x - 1, y - 1).val() << endl;
        }
    }
    return 0;
} 