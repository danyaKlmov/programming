#include <iostream>

using namespace std;
int main8() {
	float x;
	cin >> x;
	int ix = (int)x;
	if (x < 0) {
		x = 0;
	}
	else if (ix % 2 == 0) {
		x = 1;
	}
	else {
		x = -1;
	}
	cout << x;
	return 0;
}