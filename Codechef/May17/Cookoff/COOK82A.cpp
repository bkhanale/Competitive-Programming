#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3,s4;
        ll g1,g2,g3,g4,bar,mal,rel,eib;
        cin>>s1>>g1>>s2>>g2>>s3>>g3>>s4>>g4;
        if(s1[0]=='B')
        {
            bar=g1;
        }
        else if(s1[0]=='M')
        {
            mal=g1;
        }
        else if(s1[0]=='R')
        {
            rel=g1;
        }
        else if(s1[0]=='E')
        {
            eib=g1;
        }
 
 
        if(s2[0]=='B')
        {
            bar=g2;
        }
        else if(s2[0]=='M')
        {
            mal=g2;
        }
        else if(s2[0]=='R')
        {
            rel=g2;
        }
        else if(s2[0]=='E')
        {
            eib=g2;
        }
 
        if(s3[0]=='B')
        {
            bar=g3;
        }
        else if(s3[0]=='M')
        {
            mal=g3;
        }
        else if(s3[0]=='R')
        {
            rel=g3;
        }
        else if(s3[0]=='E')
        {
            eib=g3;
        }
 
        if(s4[0]=='B')
        {
            bar=g4;
        }
        else if(s4[0]=='M')
        {
            mal=g4;
        }
        else if(s4[0]=='R')
        {
            rel=g4;
        }
        else if(s4[0]=='E')
        {
            eib=g4;
        }
 
        if(rel<mal && bar>eib)
        {
            cout<<"Barcelona\n";
        }else{
            cout<<"RealMadrid\n";
        }
    }
    return 0;
}
 
