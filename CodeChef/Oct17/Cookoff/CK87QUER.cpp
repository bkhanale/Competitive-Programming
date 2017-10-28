#include <iostream>
#include <math.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;
 
	while(t--)
	{
		long long int y;
		cin>>y;
 
		long long int sum = 0;
 
		for(long long int i=(y-700>=0)?y-700:0; i<=y-1; i++)
		{
			sum += sqrt(i);
		}
		cout<<sum<<endl;
	}
 
	return 0;
}