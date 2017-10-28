#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        if(c=='B'||c=='b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(c=='C'||c=='c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(c=='D'||c=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(c=='F'||c=='f')
        {
            cout<<"Frigate"<<endl;
        }
    }
}
 
