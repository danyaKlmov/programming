#include<iostream>

using namespace std;

int main46() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int b = a[0] % 2;
	int i = 1;
	for (i = 1; ((i < n) && (b != a[i] % 2)); ++i) {
		b = a[i] % 2;
	}
	if (i == n) {
		cout << 0;
	}
	else {
		cout << i + 1;
	}
	return 0;
}