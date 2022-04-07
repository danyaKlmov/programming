#include<iostream>

using namespace std;

int main11() {
	int n;
	cin >> n;
	double a = 1;
	for (int i = 1; i <= n; i++) {
		a += a * (1 + 0.1 * i);
}
	cout << a;
	return 0;
}