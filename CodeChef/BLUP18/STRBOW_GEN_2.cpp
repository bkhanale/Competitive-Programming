#include "testlib.h"
#include <iostream>
using namespace std;

int main() {
	freopen("input2.txt", "w", stdout);
	int t = 10;
	cout << t << endl;
	while(t--) {
		int start = rnd.next(1, 10000);
		int brk = rnd.next(10001, 14999);
		for(int i = start + 1; i < 15000; i++) {
			if(i == brk) {
				cout << i + 2;
			}
			cout << i;
		}
		cout << endl;
	}
	return 0;
}