#include <iostream>
using namespace std;

int main() {
	long long a,b;
	cin >> a >> b;
	if(a == b)cout << 1,exit(0);
	if(b-a> 6)cout << 0,exit(0);
	int rz = 1;
	for(long long x = a+1; x <= b; x++)rz *= x%10,rz %= 10;
	cout << rz;
	return 0;
}