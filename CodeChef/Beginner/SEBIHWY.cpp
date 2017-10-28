#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        float s,sg,fg,d,time,q,sp;
        cin>>s>>sg>>fg>>d>>time;
        q=(180*d)/time;
        sp=s+q;
        if(fabsf(sp-sg)<fabsf(sp-fg))
        printf("SEBI\n");
        else if(fabsf(sp-sg)==fabsf(sp-fg))
        printf("DRAW\n");
        else
        printf("FATHER\n");
    }
}
 
