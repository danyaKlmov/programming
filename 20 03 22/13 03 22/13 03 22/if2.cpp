#include <iostream>

using namespace std;
int main1() {
	int a;
	cin >> a;
	if (a > 0) {
		 a = a + 1;
	}
	else {
		 a = a - 2;
	}
	cout << a;
	return 0;
}