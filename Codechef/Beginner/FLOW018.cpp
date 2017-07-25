#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int fact=1;
        for(int i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }
}
 
