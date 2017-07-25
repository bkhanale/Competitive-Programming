#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        double sal;
        cin>>sal;
        if(sal<1500)
        {
            double hra = 0.10*sal;double da = 0.90*sal;
            cout<<hra+da+sal<<endl;
        }else{
            double hra = 500;double da = 0.98*sal;
            cout<<hra+da+sal<<endl;
        }
    }
}
 
