#include <iostream>
#include<cmath>

using namespace std;
int main13() {
	float x;
	cin >> x;
	if (x > 0) {
		x = 2 * sin(x);
		cout << x;
	}
	else {
		x = 6 - x;
		cout << x;
	}
	return 0;
}