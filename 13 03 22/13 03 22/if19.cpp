#include <iostream>

using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a != b) && (a != c) && (a != d)) {
		cout << 1;
	}
	if ((b != a) && (b != c) && (b != d)) {
		cout << 2;
	}
	if ((c != a) && (c != b) && (c != d)) {
		cout << 3;
	}
	if ((d != a) && (d != b) && (d != c)) {
	cout << 4;
	}

	return 0;
}