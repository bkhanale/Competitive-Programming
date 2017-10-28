#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll num,count=0;
        cin>>num;
        ll temp = num;
        ll last = num % 10;
        while(num!=0)
        {
            num=num/10;
            count++;
        }
        ll first = temp / pow(10,count-1);
        cout<<first+last<<endl;
    }
}
 
