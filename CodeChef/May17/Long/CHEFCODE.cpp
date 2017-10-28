#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
ll C=0;ll n,k,count=0,j,z,prod=1;
ll a[100001];

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
void solve(ll prod,ll i)
{
    if(i==n)
    {
        return;
    }
    if(prod*a[i]>k)
    {
        C+=fast_power(2,n-i-1);
    }else{
        solve(a[i]*prod,i+1);
    }
    solve(prod,i+1);
}
/*template <typename T>
int prodcompslice_sub(const T* v, size_t len, T d)
{
    T prod = 1;
    for (size_t i = 0; i < len; ++i)
    {
        prod *= v[i];
        if (prod >= d)
            return 0;
    }
    return 1;
}

template <typename T>
int prodcompslice(const std::vector<T>& v, T d)
{
    int sum = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = i; j < v.size(); ++j)
        {
            auto count = prodcompslice_sub(&v[i], (j - i)+1, d);
            if (count1 == 0)
                break;
            sum += count;
        }
    }
    return sum;
}*/
int main()
{

    cin>>n>>k;
    ll i;
    //ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //unsigned long long int asize=fast_power(2,n);
    /*
    for(i=1;i<asize;i++)
    {
        ll pro=1;
        for(j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                pro*=a[j];
            }
        }
        if(pro<=k)
        {
            //cout<<"pro="<<pro<<endl;
            count++;
        }
    }
    */
    /*
    for(int i=1; i<1<<n; i++)
    {
        int temp=i;
        int j=0;
        ll pro=1;
        while(temp)
        {
            if (temp&1) // if jth bit is set print a[j]
            {
                //cout<<"pro="<<pro<<endl;
                pro*=a[j];
            }
            temp >>= 1;
            j++;
        }
        if(pro<=k)
        {
            count++;
        }
    }
    cout<<count<<endl;*/
    solve(1,0);
    cout<<fast_power(2,n)-1-C<<endl;
}

