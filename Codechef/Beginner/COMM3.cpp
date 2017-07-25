#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
float dist(ll x1,ll y1,ll x2,ll y2)
{
    return (float)sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r;
        cin>>r;
        ll x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double dist1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        double dist2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        double dist3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
        if(dist1>r&&dist2>r&&dist3>r)
        {
            cout<<"no"<<endl;
        }
        else if(dist1>r&&dist2>r)
        {
            cout<<"no"<<endl;
        }
        else if(dist2>r&&dist3>r)
        {
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
}
 
