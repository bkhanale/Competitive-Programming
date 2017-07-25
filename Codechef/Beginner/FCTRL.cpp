#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t,num,z,c;
    cin>>t;
    while(t--)
    {
        z=0;
        cin>>num;
        c=5;
        while(num/c>0)
        {
            z=z+(num/c);
            c=c*5;
        }
        cout<<z<<endl;
    }
}
 
