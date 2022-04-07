#include <iostream>
#include<cmath>

using namespace std;
int main18() {
	float x;
	cin >> x;
	if (x > 0) {
		x = 2 * sin(x);
	}
	else {
		x = 6 - x;
	}
	cout << x;
	return 0;
}