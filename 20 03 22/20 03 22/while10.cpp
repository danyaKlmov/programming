#include<iostream>

using namespace std;

int main15() {
	int n, a, b;
	cin >> n;
	a = 0;
	b = 3;
	while (b < n) {
		b *= 3;
		a++;
	}
	cout << a;
	return 0;
}