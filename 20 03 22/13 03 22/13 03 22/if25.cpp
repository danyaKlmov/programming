#include <iostream>

using namespace std;
int main19() {
	float x;
	cin >> x;
	if (x < -2 || x > 2) {
		x = 2 * x;
	}
	else {
		x = -3 * x;
	}
	cout << x;
	return 0;
}