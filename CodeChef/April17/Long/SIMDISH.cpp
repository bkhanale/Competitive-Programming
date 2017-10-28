#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll count=0;
        string s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        string st1,st2,st3,st4;
        cin>>st1>>st2>>st3>>st4;
        if(s1==st1||s1==st2||s1==st3||s1==st4)
        {
            count++;
        }
        if(s2==st1||s2==st2||s2==st3||s2==st4)
        {
            count++;
        }
        if(s3==st1||s3==st2||s3==st3||s3==st4)
        {
            count++;
        }
        if(s4==st1||s4==st2||s4==st3||s4==st4)
        {
            count++;
        }
        if(count>=2)
        {
            cout<<"similar\n";
        }else{
            cout<<"dissimilar\n";
        }
    }
    return 0;
}
 
