#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long int total = 0;
        char prevp = '0',prev;
        for(int i=0;i<s.length();i++)
        {
            long long int cnt = 1;
            int j = i +1;
            prev = s.at(i);
            while((j<s.length()) && (s.at(j) == prev))
            {
                j++;
                cnt++;
            }
            total += (cnt*(cnt-1))/2;
            if((j<s.length()) && (s.at(j) == prevp))
            {
                total++;
            }
            prevp = s.at(i);
            i = j-1;
        }
        cout<<total<<"\n";
    }
    return 0;
} 