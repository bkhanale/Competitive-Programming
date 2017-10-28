#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0||b==0||c==0||d==0)
        {
            cout<<"Yes"<<endl;
        }
        else if(a+b+c+d==0||a+b+c==0||a+b+d==0||b+c+d==0||a+c+d==0)
        {
            cout<<"Yes"<<endl;
        }
        else if(a+b==0||b+c==0||c+d==0||a+c==0||a+d==0||b+d==0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
 
