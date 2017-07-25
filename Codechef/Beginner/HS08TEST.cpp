#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int amt;
    float bal;
    cin>>amt>>bal;
    if(amt%5==0&&bal>=amt+0.50)
    {
        cout<<bal-amt-0.50<<endl;
    }else{
        cout<<bal<<endl;
    }
    return 0;
}
 
