#include <iostream>

using namespace std;
int main() {
	int a;
	cin >> a;
	if (a > 0) {
		a = a + 1;
	}
	else if (a < 0) {
		a = a - 2;
	}
	else if (a == 0) {
		a = 10;
	}
	cout << a;
	return 0;
}