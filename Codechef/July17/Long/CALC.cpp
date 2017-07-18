#include <bits/stdc++.h>
#include <functional>

using namespace std;
typedef long long int ll;
ll n,b;
long long f(int x) {
    return (n - b*x) * x;
}
int ternary_search(function<long long (int)> func, int left, int right) {
    int ans = 0;
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (f(mid) > f(mid+1)) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {

        cin>>n>>b;

        /*ll value=0,i,value1=0,value2=0,cnt=0;
        for(i=b;i<=n;i=i+b)
        {
            //cnt++;
            value1 = (n-i);
            value2 = value1 * (i/b);
            if(value2>=value)
            {
                value = value2;
            }else{
                break;
            }
        }
        cout<<value<<endl;*/

        ll value1 = ternary_search(f,0,n/b);
        cout<<f(value1)<<endl;
    }
    return 0;
}
