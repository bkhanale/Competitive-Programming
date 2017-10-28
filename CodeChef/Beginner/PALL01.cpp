#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        ll l = n.length();
        for(int i=0;i<(l+1)/2;i++)
        {
            if(n[i]!=n[l-i-1])
            {
                cout<<"losses"<<endl;
                goto A;
            }
        }
        cout<<"wins"<<endl;
        A:
        cout<<"";
    }
}
 
