#include <iostream>

using namespace std;
int main6() {
	int x, y;
	cin >> x >> y;
	if ((x > 0) && (y > 0)) {
		cout << 1;
	}
	if ((x < 0) && (y > 0)) {
		cout << 2;
	}
	if ((x > 0) && (y < 0)) {
		cout << 3;
	}
	if ((x < 0) && (y < 0)) {
		cout << 4;
	}
	return 0;
}