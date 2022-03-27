#include<iostream>

using namespace std;
int main30() {
	int n;
	cin >> n;
	while ((n > 0) && ((n % 10) % 2 == 0)) {
		n /= 10;
	}
	if ((n % 10) % 2 != 0) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}