#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,i,cnt=0;
        cin>>p;
        A:
        for(i=1;i<=12;i++)
        {
            if(p<=2048)
            {
                if(pow(2,i-1)==p)
                {
                    cnt++;
                    break;
                }
                else if(pow(2,i-1)>p)
                {
                    cnt++;
                    p=p-pow(2,i-2);
                    goto A;
                }
            }
            else if(p>2048){
                cnt=p/2048;
                if(p%2048!=0)
                {
                    p=p%2048;
                    goto A;
                }
            }
            if(p==0)
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
 
