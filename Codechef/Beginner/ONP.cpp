#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,i;
    char exp[1000];
    stack <char> stk;
    cin>>t;
    while(t--)
    {
        cin>>exp;
        ll l = strlen(exp);
        for(i=0;i<l;i++)
        {
            if(isalpha(exp[i]))
            {
                cout<<exp[i];
            }
            else if(exp[i]==')')
            {
                cout<<stk.top();
                stk.pop();
            }
            else if(exp[i]!='(')
            {
                stk.push(exp[i]);
            }
        }
        cout<<endl;
    }
    return 0;
}
 
