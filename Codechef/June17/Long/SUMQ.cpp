#include <bits/stdc++.h>
#define gc getchar
#define pc putchar
using namespace std;
typedef long long int ll;
ll mod=1000000007;
// The read integer functions has been copied from a codeforces post
// to speed up the io for large integers
// http://codeforces.com/blog/entry/8080
ll read_ll() {
    char c = gc();
    while((c < '0' || c > '9') && c != '-') c = gc();
    ll ret = 0;
    int neg = 0;
    if (c == '-') neg = 1, c = gc();
    while(c >= '0' && c <= '9') {
        ret = 10 * ret + c - 48;
        c = gc();
    }
    return neg ? -ret : ret;
}
int main()
{
    //ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,q,r,i;
        p=read_ll();
        q=read_ll();
        r=read_ll();
        vector<ll> a(p),b(q),c(r);
        for(i=0;i<p;i++)
        {
            a[i]=read_ll();
        }
        for(i=0;i<q;i++)
        {
            b[i]=read_ll();
        }
        for(i=0;i<r;i++)
        {
            c[i]=read_ll();
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        ll ans=0;
        //TRY-1
        /*for(i=0;i<q;i++)
        {
            ll j=0,k=0;
            while(a[j]<=b[i]&&c[k]<=b[i])
            {
                //cout<<"a="<<a[j]<<"b="<<b[i]<<"c="<<c[k]<<endl;
                ans=ans+((a[j]+b[i])*(b[i]+c[k])%1000000007);
                //cout<<"ans="<<ans<<endl;
                j++;
                if(a[j]>b[i])
                {
                    k++;
                    j=0;
                }
            }
        }
        //
        //TRY-2
        i=0;
        ll j=0,k=0;
        while(a[i]<=b[j]&&b[j]>=c[k])
        {
            //cout<<"a="<<a[i]<<"b="<<b[j]<<"c="<<c[k]<<endl;
            ans=ans+(((a[i]+b[j])%1000000007)*((b[j]+c[k])%1000000007)%1000000007);
            if(a[i+1]<=b[j]&&i+1<p)
            {
                i++;
            }else{
                i=0;
                if(c[k+1]<=b[j])
                {
                    k++;
                }else{
                    if(j+1<q)
                    {
                        j++;
                    }else{
                        break;
                    }
                    i=0;k=0;
                }
            }
        }
        cout<<ans<<endl;*/
        //
        //TRY-3
        /*
        ll j,k;
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                if(a[i]>b[j])
                    continue;
                for(k=0;k<r;k++)
                {
                    if(b[j]<c[k])
                        continue;
                    ans=(ans+((a[i]+b[j])%1000000007*(b[j]+c[k])%1000000007)%1000000007)%1000000007;
					ans=ans%1000000007;
                }
            }
        }
        cout<<ans<<endl;*/
        //
        //TRY-4
        ll X=0,Y,Z=0,xcnt,zcnt;
        bool flag1=false,flag2=false;
        ll ai=-1,ci=-1;
        for(i=0;i<q;i++)
        {
            Y=b[i];
            if(!flag1)
            {
                while(ai+1<p&&a[ai+1]<=Y)
                {++ai,X=(X+a[ai])%1000000007;if(ai==p-1)flag1=true;}
            }
            if(!flag2)
            {
                while(ci+1<r&&c[ci+1]<=Y)
                {++ci,Z=(Z+c[ci])%1000000007;if(ci==r-1)flag2=true;}
            }
            xcnt=ai+1;
            zcnt=ci+1;
            if(xcnt!=0&&zcnt!=0)
            {
                ans=(ans%mod+(((X+(xcnt%mod*Y%mod)%mod)%mod*(Z+(zcnt%mod*Y%mod)%mod)%mod)%mod)%mod)%mod;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
