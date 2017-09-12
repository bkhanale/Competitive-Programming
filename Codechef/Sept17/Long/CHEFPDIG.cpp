#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll i;
		string s;
		cin >> s;
	    ll len = s.length();
	    //unordered_map<ll,ll> freq;

	    vector<ll> freq;
	    freq.resize(10);
	    freq.clear();

	    for(i=0;i<len;i++)
	    {
	          //b[s[i]-'0']++;
	          freq[s[i]-'0']++;
	    }
	    ll right=0,left=0;
	    for(i=65;i<=90;i++)
	    {
	        left = i / 10;
	        right = i % 10;
	 		
	        //if(b[left] && b[right])
	        //    cout << (char)i;

	        if(freq[left])
	        {
	        	freq[left]--;
	        	if(freq[right])
	        	{
	        		cout << (char)i;
	        		
	        	}
	        	freq[left]++;
	        }
	    }
	    cout<<endl;
	}
	std::getchar();
	cout << endl << "Press any key to continue..." << endl;
	std::getchar();
	return 0;
}