#include <iostream>

using namespace std;
int main10() {
	int a;
	cin >> a;
	if (a > 0) {
		a = a + 1;
	}
	else if (a < 0) {
		a = a - 2;
	}
	else {
		a = 10;
	}
	cout << a;
	return 0;
}