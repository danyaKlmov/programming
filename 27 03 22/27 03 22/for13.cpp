#include<iostream>

using namespace std;

int main8() {
	int n, sign = 1;
	cin >> n;
	double a = 0;
	for (int i = 1; i <= n; i++) {
		a += sign * (1.0 + i / 10.0);
		sign *= -1;
		cout << a << ' ';
	}
	return 0;
}