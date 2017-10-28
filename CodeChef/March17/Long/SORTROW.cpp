#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct s{
    ll arr[100000];
}s;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll grid[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    ll arr[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[j]=grid[i][j];
        }
        sort(arr,arr+n);
        for(k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

