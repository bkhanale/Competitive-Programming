#include <iostream>
using namespace std;

int main() {
	freopen("input1.txt", "w", stdout);
	int t = 10;
	cout << t << endl;
	while(t--) {
		for(int i = 999; i <= 15000; i++) {
			cout << i + t;
		}
		cout << endl;
	}
	return 0;
}