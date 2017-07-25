/**
    Author: Bhushan K.
    Codechef - March Long 17
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> vec;
string s;
ll n,k;
bool function2(int t){
	int c = 0;
	for(int i = 0; i < vec.size(); i++){
		if(vec[i] > t){
			c += vec[i]/(t+1);
		}
	}
	return c<=k;
}
bool function1(){
	int c1 = 0, c0 = 0;
	for(int i = 0; i < s.length();i++){
		int x = s[i]-'0';
		c1 += (x == i%2);
		c0 += (x != i%2);
	}
	return min(c1,c0)<=k;
}
bool functioncheck(int t){
	if(t==1) return function1();
	return function2(t);
}
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        vec.clear();
        ll count=1,t=0,ti,rep,rep1=0;
        cin>>n>>k;
        cin>>s;
        //count=1;t=1;
        char check=s[0];
        for(i=1;i<s.length();i++)
        {
            if(s[i]==check)
            {
                count++;
            }else{
                vec.push_back(count);
                count=1;
                check=s[i];
            }
        }
        if(count>0)
        {
            vec.push_back(count);
        }
        t=vec[0];
        for(i=0;i<vec.size();i++)
        {
            t=max(t,vec[i]);
        }
        //cout<<"t="<<t<<endl;
        ll l=1,r=t,r1=t,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            /*if(mid==1)
            {
                ll te1=0,te2=0;
                for(i=0;i<s.length();i++)
                {
                    ll x=s[i]-'0';
                    te1 += (x == i%2);
                    te2 += (x != i%2);
                }
                if(min(te1,te2)<=k)
                {
                    r1=mid;
                    r=mid-1;
                }else{
                    l=mid+1;
                }
                //cout<<r1<<endl;
            }else{
                ll c=0;
                for(i=0;i<vec.size();i++)
                {
                    if(vec[i]>mid)
                    {
                        c += vec[i]/(mid+1);
                    }
                    if(c<=k)
                    {
                        r1=mid;
                        r=mid-1;
                    }else{
                        l=mid+1;
                    }
                }
                //cout<<r1<<endl;
            }*/
            if(functioncheck(mid))
            {
                r1= mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout<<r1<<endl;
            //ll si=ti-t+1,ei=ti;
            //flip(s,s[si+(ei-si+1)/2],si+(ei-si+1)/2);
            /*if(t!=1)
            {
                if(s[si+(ei-si+1)/2]=='0')
                {
                    s[si+(ei-si+1)/2]='1';
                }else{
                    s[si+(ei-si+1)/2]='0';
                }
                cout<<s<<endl;
            }else{
                break;
            }*/
 
        /*cout<<s<<endl;
        count=1;t=1;
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
            }else{
                count=1;
            }
            if(count>t)
            {
                t=count;
                ti=i;
            }
        }*/
        //cout<<"t="<<t;
        /*count=1;
        for(i=1;i<=n;i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
            }else{
                if(count<t&&count>1)
                {
                    t=count;
                    ti=i;
                }
                count=1;
            }*/
            /*if(count<t&&count>1)
            {
                t=count;
                ti=i;
            }*/
        /*}
        cout<<t<<endl;*/
    }
    return 0;
}
 
