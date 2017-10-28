#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> v;
vector<ll> a1;
multiset<ll> m;
//The function countones basically counts the number of 1's in every window
void countones(ll n,ll k)
{
    ll count=0,i,j=0;
    for(i=0;i<k;i++)
    {
        count+=v[i];
    }
    //cout<<"This goes to a1 and m:"<<count<<endl;
    a1.push_back(count);
    m.insert(count);
    for(i=k;i<n;i++)
    {
        count=count-v[j]+v[i];
        //cout<<"This also goes to a1 and m:"<<count<<endl;
        a1.push_back(count);
        m.insert(count);
        j++;
    }
}
void new_win(ll w,ll i,ll add,ll sub)
{
    a1[i]=a1[w]+v[add]-v[sub];
}
int main()
{
    ll n,k,p,i;
    cin>>n>>k>>p;
    for(i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        v.push_back(num);
    }
    string s;
    cin>>s;
    countones(n,k);
    ll li=a1.size()-1,sub=k-1,add=n-1,w=0;
    for(i=0;i<p;i++)
    {
        if(s[i]=='!')
        {
            if(n<1000&k<1000&p<1000)
            {
                rotate(v.rbegin(),v.rbegin()+1,v.rend());
                continue;
            }
            /*cout<<"Rotation here: ";
            for(int z=0;z<v.size();z++)
            {
                cout<<v[z]<<" ";
            }
            cout<<endl;*/
            if(li==-1)
            {
                li=a1.size()-1;
            }
            if(add==-1)
            {
                add=n-1;
            }
            if(sub==-1)
            {
                sub=n-1;
            }
            multiset<ll>::iterator it=m.find(a1[li]);
            m.erase(it);
            new_win(w,li,add--,sub--);
            m.insert(a1[li]);
            w=li;
            li--;
        }
        else if(s[i]=='?')
        {
            if(n<1000&k<1000&p<1000)
            {
                m.clear();
                countones(n,k);
            }
            multiset<ll>::reverse_iterator it=m.rbegin();
            cout<<*it<<endl;
        }
    }
    return 0;
}
 
