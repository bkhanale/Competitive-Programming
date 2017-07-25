#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        float q,p,exp;
        scanf("%f%f",&q,&p);
        if(q>1000)
        {
             printf("%.6f\n",(q*p)-(q*p*0.10));
        }else{
             printf("%.6f\n",q*p);
        }
    }
    return 0;
}
 
