#include <iostream>

using namespace std;
int main() {
	float x;
	cin >> x;
	if (x <= 0) {
		x = -x;
		cout << x;
	} 
	else if (x > 0 && x < 2) {
		x = x * x;
		cout << x;
	} 
	else if (x >= 2) {
		x = 4;
		cout << x;
	}
	return 0;
}