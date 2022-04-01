#include <iostream>

using namespace std;
int main14() {
	int a, b, c, min, max;
	cin >> a >> b >> c;
	min = a;
	max = b;
	if ((b < a) && (b < c)) {
		min = b;
	}
	if ((c < a) && (c < b)) {
		min = c;
	}
	if ((a > b) && (a > c)) {
		max = a;
	}
	if ((c > a) && (c > b)) {
		max = c;
	}
	cout << min << ' ' << max;
	return 0;
}