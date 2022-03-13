#include <iostream>

using namespace std;
int main() {
	int a, b, c, k;
	k = 0;
	cin >> a >> b >> c;
	if (a > 0) {
		k = k + 1;
	}
	if (b > 0) {
		k = k + 1;
	}
	if (c > 0) {
		k = k + 1;
	}
	cout << k;
	return 0;
}