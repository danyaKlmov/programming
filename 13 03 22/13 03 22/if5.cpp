#include <iostream>

using namespace std;
int main10() {
	int a, b, c, k1, k2;
	k1 = 0;
	k2 = 0;
	cin >> a >> b >> c;
	if (a > 0) {
		k1 = k1 + 1;
	}
	if (b > 0) {
		k1 = k1 + 1;
	}
	if (c > 0) {
		k1 = k1 + 1;
	}
	if (a < 0) {
		k2 = k2 + 1;
	}
	if (b < 0) {
		k2 = k2 + 1;
	}
	if (c < 0) {
		k2 = k2 + 1;
	}
	cout << k1 << ' ' << k2;
	return 0;
}