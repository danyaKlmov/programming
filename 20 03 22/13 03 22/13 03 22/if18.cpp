#include <iostream>

using namespace std;
int main5() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a != b) && (a != c)) {
		cout << 1;
	}
	if ((b != a) && (b != c)) {
		cout << 2;
	}
	if ((c != a) && (c != b)) {
		cout << 3;
	}

	return 0;
}